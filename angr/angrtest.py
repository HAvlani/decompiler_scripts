import angr
from angr.analyses import (
    CFGFast,
    Decompiler
)
import os
i=1
p = angr.Project('/Users/harshilavlani/Headless_decomp/2function', auto_load_libs=False, load_debug_info=True)
cfg = p.analyses[CFGFast].prep()(data_references=True, normalize=True)
for f in cfg.functions.values():
    dec = p.analyses[Decompiler].prep()(f, cfg=cfg.model)
    name = "function" + str(i)
    i+=1
    filepath = os.path.join('/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'+ name)
    #with open(filepath, "w") as f:
        #f.write(dec.codegen.text)
    print(dec.codegen)