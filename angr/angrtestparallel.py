import angr
from angr.errors import UnsupportedNodeTypeError
from angr.analyses import (
    CFGFast,
    Decompiler
)
from claripy import ClaripyOperationError
import os
from joblib import Parallel, delayed
import timeout_decorator
import time
from datetime import datetime
from timeout_decorator.timeout_decorator import TimeoutError as time_error

#import ipdb
#ipdb.set_trace()
timeoutduration = 900 #timeout value
Path_To_Coreutil_Binaries = '/Users/harshilavlani/Headless_decomp/coreutils-builder/bin/'#"/path/to/binary/" #Enter path to folder with coreutil binaries in question
Path_To_Output_Folder = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'#"/path/to/output/folder/" #specify output folder
Num_Cores_In_Use = 4 #specify number of cores to be used
Error_Path = '/Users/harshilavlani/Headless_decomp/angr-errors/'#"/path/to/error/folder/" #specify folder where error files will be written


@timeout_decorator.timeout(timeoutduration)
def decompile_func(f, filename, p, cfg):
    now = datetime.now()
    start_time=time.time()
    name = filename + " " + f.name
    print(f.name + " " + filename) 
    filepath = os.path.join(Path_To_Output_Folder+ name)
    try:      
        dec = p.analyses[Decompiler].prep()(f, cfg=cfg.model)
        with open(filepath, "w") as a:
            a.write(dec.codegen.text)
        #print("START_TIME " + now.strftime("%H:%M:%S"))
        #print("--- %s seconds ---" % (time.time() - start_time) + name)
        #print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))
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
    except UnsupportedNodeTypeError:
        with open(Error_Path + 'UnsupportedNodeTypeError', "a") as a:
                a.write(name + "\n")
    except NotImplementedError:
        with open(Error_Path + 'NotImplementedError', "a") as a:
            a.write(name + "\n")
        #print("*********NOTIMPLEMENTEDERROR**********")
        #print("START_TIME " + now.strftime("%H:%M:%S"))
        #print("--- %s seconds ---" % (time.time() - start_time) + name)
        #print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))

    except time_error:
        with open(Error_Path + 'TimeoutError', "a") as a:
            a.write(name + "\n" )
        print("*********TIMEDOUT**********")
        print("START_TIME " + now.strftime("%H:%M:%S"))
        print("--- %s seconds ---" % (time.time() - start_time) + " " +  name)
        print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))
        
def decompile():
    for filename in os.listdir(Path_To_Coreutil_Binaries):
        p = angr.Project(Path_To_Coreutil_Binaries + filename, auto_load_libs=False, load_debug_info=True)
        cfg = p.analyses[CFGFast].prep()(data_references=True, normalize=True)
        if __name__ == '__main__':      
            Parallel(n_jobs=Num_Cores_In_Use, verbose=25)(delayed(decompile_func)(f,filename,p, cfg) for f in cfg.functions.values())
    
decompile()
