import os
import re
import json
GHIDRAFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
totallines = 0
GHIDRAdict= {}
arr = []
pattern = rb"(halt_baddata)"

for filename in os.listdir(GHIDRAFUNCTIONPATH):
    GHIDRAfunctionfile = open(GHIDRAFUNCTIONPATH + filename, 'rb')
    GHIDRAcontent = GHIDRAfunctionfile.read()
    GHIDRAfunctionfile.close()
    matchesGHIDRA = re.findall(pattern, GHIDRAcontent)
    if len(matchesGHIDRA) > 0:
        GHIDRAdict[filename] = "bad_data" 
    else:
        GHIDRAdict[filename] = "" 
    
with open('/Users/harshilavlani/Headless_decomp/GHIDRAlabel.json', "a") as GHIDRA:
    json.dump(GHIDRAdict, GHIDRA)