from socket import timeout
import angr
from angr.analyses import (
    CFGFast,
    Decompiler
)
from claripy import *
import os
from joblib import Parallel, delayed
import timeout_decorator

#import ipdb
#ipdb.set_trace()
def decompile(filename):
    p = angr.Project('/Users/harshilavlani/Headless_decomp/coreutils-builder/bin/' + filename, auto_load_libs=False, load_debug_info=True)
    cfg = p.analyses[CFGFast].prep()(data_references=True, normalize=True)
    for f in cfg.functions.values():
        print(f.name + " " + filename)
        name = filename + " " + f.name
        filepath = os.path.join('/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'+ name)
        try:    
            try:

                dec = p.analyses[Decompiler].prep()(f, cfg=cfg.model)
                with open(filepath, "w") as f:
                    f.write(dec.codegen.text)
            except AttributeError: 
                with open('/Users/harshilavlani/Headless_decomp/angr-errors/AttributeError', "a") as f:
                    f.write(name + "\n")
      
        except ValueError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/ValueError', "a") as f:
                    f.write(name + "\n")
        except ClaripyOperationError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/ClaripyOperationError', "a") as f:
                    f.write(name + "\n")
        except TypeError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/TypeError', "a") as f:
                    f.write(name + "\n")

            
        
Parallel(n_jobs=4, timeout=5, verbose=10)(delayed(decompile)(filename) for filename in os.listdir('/Users/harshilavlani/Headless_decomp/coreutils-builder/bin/'))

#with Parallel(n_jobs=4) as parallel:
    
    
    #if __name__ == '__main__':
        #parallel(delayed(decompile)(filename) for filename in os.listdir('/Users/harshilavlani/Headless_decomp/coreutils-builder/bin/'))
