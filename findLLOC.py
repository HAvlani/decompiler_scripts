import delegator
import os
from tqdm import tqdm
import json

GHIDRAFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
ANGRFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
GHIDRAdict = {}
angrdict = {}

for filename in tqdm(os.listdir(GHIDRAFUNCTIONPATH)):
    GHIDRAFUNCTIONFILE = GHIDRAFUNCTIONPATH + filename
    c = delegator.run('cat ' + GHIDRAFUNCTIONFILE + "| ./easysloc")
    lloc = c.out.split()[0]
    GHIDRAdict[filename] = lloc
    
for filename in tqdm(os.listdir(ANGRFUNCTIONPATH)):
    ANGRFUNCTIONFILE = ANGRFUNCTIONPATH + filename
    c = delegator.run('cat ' + ANGRFUNCTIONFILE + "| ./easysloc")
    lloc = c.out.split()[0]
    angrdict[filename] = lloc
    
with open("/Users/harshilavlani/Headless_decomp/GHIDRALLOC.json", "a") as outfile:
    json.dump(GHIDRAdict, outfile)
    
with open("/Users/harshilavlani/Headless_decomp/angrLLOC.json", "a") as outfile:
    json.dump(angrdict, outfile)
    

    
   