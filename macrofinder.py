import os
import re
import json
angrdict  = {}
GHIDRAdict = {}
FuncPathAngr = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/' 
FuncPathGHIDRA = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/' 
pattern = rb"\$define"
for filename in os.listdir(FuncPathAngr):
    with open(FuncPathAngr + filename, "rb") as angrfuncs:
         matchesangr = re.findall(pattern, angrfuncs.read())
         angrdict[filename] = len(matchesangr)
         
for filename in os.listdir(FuncPathGHIDRA):
    with open(FuncPathGHIDRA + filename, "rb") as GHIDRAfuncs:
         matchesGHIDRA = re.findall(pattern, GHIDRAfuncs.read())
         GHIDRAdict[filename] = len(matchesangr)
         
with open("/Users/harshilavlani/Headless_decomp/macrosangr.json", 'a') as angrjson, open("/Users/harshilavlani/Headless_decomp/macrosGHIDRA.json", "a") as GHDIRAjson:
    json.dump(angrdict, angrjson)
    json.dump(GHIDRAdict, GHDIRAjson)
    
         
        
        