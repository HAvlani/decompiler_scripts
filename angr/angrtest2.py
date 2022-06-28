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
timeoutduration = 480 #timeout value
Path_To_Coreutil_Binaries = "/path/to/binary/" #Enter path to folder with coreutil binaries in question
Path_To_Output_Folder = "/path/to/output/folder/" #specify output folder
Num_Cores_In_Use = 1 #specify number of cores to be used
Error_Path = "/path/to/error/folder/" #specify folder where error files will be written


@timeout_decorator.timeout(timeoutduration)
def decompile_func(f, filename, p, cfg):
    print(f.name + " " + filename)
    name = filename + " " + f.name 
    filepath = os.path.join(Path_To_Output_Folder+ name)
    try:      
        dec = p.analyses[Decompiler].prep()(f, cfg=cfg.model)
        with open(filepath, "w") as a:
            a.write(dec.codegen.text)
    except AttributeError: 
        with open(Error_Path + 'AttributeError', "a") as a:
                a.write(name + "\n")
    except ValueError:
        with open(Error_Path + 'ValueError', "a") as a:
                a.write(name + "\n")
    except ClaripyOperationError:
        with open(Error_Path + 'ClaripyOperationError', "a") as a:
                a.write(name + "\n")
    except TypeError:
        with open(Error_Path + 'TypeError', "a") as a:
                a.write(name + "\n")
    except Exception:
        with open(Error_Path + 'TimeoutError', "a") as a:
                a.write(name + "\n" )
                
def decompile():
    for filename in os.listdir(Path_To_Coreutil_Binaries):
        p = angr.Project(Path_To_Coreutil_Binaries + filename, auto_load_libs=False, load_debug_info=True)
        cfg = p.analyses[CFGFast].prep()(data_references=True, normalize=True)
        if __name__ == '__main__':      
            Parallel(n_jobs=Num_Cores_In_Use, verbose=25)(delayed(decompile_func)(f,filename,p, cfg) for f in cfg.functions.values())

decompile()
