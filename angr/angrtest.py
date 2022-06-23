import angr
from angr.analyses import (
    CFGFast,
    Decompiler
)
from claripy import *
import os
#import ipdb
#ipdb.set_trace()
for filename in os.listdir('/Users/harshilavlani/Headless_decomp/coreutils-builder/bin/'):

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
                #print("*************" + "AttributeError " + name + "************")
        except ValueError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/ValueError', "a") as f:
                    f.write(name + "\n")
            #print("*************" + "ValueError " + f.name + filename + "************")
        except ClaripyOperationError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/ClaripyOperationError', "a") as f:
                    f.write(name + "\n")
            #print("*************" + "ClaripyError " + f.name + filename + "************")
        except TypeError:
            with open('/Users/harshilavlani/Headless_decomp/angr-errors/TypeError', "a") as f:
                    f.write(name + "\n")
            #print("*************" + "TypeError " + f.name + filename + "************")
            
            
        
    
        
    

