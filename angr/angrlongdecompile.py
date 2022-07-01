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
Path_To_Coreutil_Binaries = '/Users/harshilavlani/Headless_decomp/coreutilbuilderlong/'#"/path/to/binary/" #Enter path to folder with coreutil binaries in question
Path_To_Output_Folder = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'#"/path/to/output/folder/" #specify output folder
Num_Cores_In_Use = 4 #specify number of cores to be used
Error_Path = '/Users/harshilavlani/Headless_decomp/angr-errors/'#"/path/to/error/folder/" #specify folder where error files will be written

array = ["md5sum md5_process_block",
            "shuf hash_remove",
            "du excluded_file_name",
            "du hash_remove",
            "du quotearg_buffer_restyled",
            "ptx quotearg_buffer_restyled",
            "df get_dev",
            "df hash_remove",
            "df printf_parse",
            "test printf_parse",
            "csplit build_trtable",
            "sort md5_process_block",
            "sort hash_remove",
            "touch quotearg_buffer_restyled",
            "touch printf_parse",
            "b2sum blake2b_compress",
            "stty printf_parse",
            "chgrp hash_remove",
            "seq printf_parse",
            "sha224sum sha256_process_block",
            "od printf_parse",
            "date parse_datetime_body",
            "realpath hash_remove",
            "readlink hash_remove",
            "date printf_parse",
            "tac build_trtable",
            "expr mpz_get_str",
            "stdbuf printf_parse",
            "printf printf_parse",
            "cksum blake2b_compress",
            "chcon hash_remove",
            "tail hash_remove",
            "factor mpz_powm",
            "pr revert_tz.part.0",
            "stat print_statfs",
            "stat printf_parse",
            "who printf_parse",
            "dd quotearg_buffer_restyled",
            "dd printf_parse",
            "sha1sum sha1_process_block",
            "sha256sum sha256_process_block",
            "dir hash_remove",
            "dir mpsort_with_tmp",
            "mkdir printf_parse",
            "nl re_string_reconstruct",
            "rmdir printf_parse",
            "sha384sum sha512_process_block",
            "mv copy_internal",
            "mv hash_remove",
            "ln hash_remove",
            "ls hash_remove",
            "ls mpsort_with_tmp",
            "cp copy_internal",
            "cp hash_remove",
            "chown hash_remove",
            "chmod hash_remove",
            "chown cycle_check",
            "rm hash_remove",
            "vdir hash_remove",
            "vdir mbsnwidth",
            "sha512sum sha512_process_block",
            "[ printf_parse"
            ]


@timeout_decorator.timeout(timeoutduration)
def decompile_func(f, filename, p, cfg):
    now = datetime.now()
    start_time=time.time()
    name = filename + " " + f.name
    if name in array:    
        print(f.name + " " + filename) 
        filepath = os.path.join(Path_To_Output_Folder+ name)
        try:      
            dec = p.analyses[Decompiler].prep()(f, cfg=cfg.model)
            with open(filepath, "w") as a:
                a.write(dec.codegen.text)
            print("START_TIME " + now.strftime("%H:%M:%S"))
            print("--- %s seconds ---" % (time.time() - start_time) + name)
            print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))
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
            print("*********NOTIMPLEMENTEDERROR**********")
            print("START_TIME " + now.strftime("%H:%M:%S"))
            print("--- %s seconds ---" % (time.time() - start_time) + name)
            print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))
    
        except time_error:
            with open(Error_Path + 'TimeoutError', "a") as a:
                a.write(name + "\n" )
            print("*********TIMEDOUT**********")
            print("START_TIME " + now.strftime("%H:%M:%S"))
            print("--- %s seconds ---" % (time.time() - start_time) + " " +  name)
            print("CURRENT_TIME " + datetime.now().strftime("%H:%M:%S"))
           
def decompile(filename):
    p = angr.Project(Path_To_Coreutil_Binaries + filename, auto_load_libs=False, load_debug_info=True)
    cfg = p.analyses[CFGFast].prep()(data_references=True, normalize=True)
    for f in cfg.functions.values():
        decompile_func(f, filename, p, cfg)
        
        
        
    

    

with Parallel(n_jobs=Num_Cores_In_Use, verbose=10) as parallel: 
    parallel(delayed(decompile)(filename) for filename in os.listdir(Path_To_Coreutil_Binaries))