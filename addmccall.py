import os
import delegator
from tqdm import tqdm
import json
GHIDRAFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
ANGRFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
totalmcc = 0
GHIDRAdict= {}
angrdict = {}


for filename in tqdm(os.listdir(GHIDRAFUNCTIONPATH)):
    GHIDRAFUNCTIONFILE = GHIDRAFUNCTIONPATH + filename
    c = delegator.run('pmccabe ' + GHIDRAFUNCTIONFILE)
    #try:
    mcc = c.out.split()[1]
    filename = c.out.split()[5].split('/')[-1].split('(')[0]
    GHIDRAdict[filename] = mcc
    #except: 
     #   with open('/Users/harshilavlani/Headless_decomp/Misc-errors/' + 'MCCError', "a") as a:
      #      a.write(filename + "\n")
        
for filename in tqdm(os.listdir(ANGRFUNCTIONPATH)):
    ANGRFUNCTIONFILE = ANGRFUNCTIONPATH + filename
    c = delegator.run('pmccabe ' + ANGRFUNCTIONFILE)
    #try:
    mcc = c.out.split()[1]
    filename = c.out.split()[5].split('/')[-1].split('(')[0]
    angrdict[filename] = mcc
    #except: 
     #   with open('/Users/harshilavlani/Headless_decomp/Misc-errors/' + 'MCCError', "a") as a:
      #      a.write(filename + "\n")
        
    

with open("/Users/harshilavlani/Headless_decomp/GHIDRAmcc.json", "a") as outfile:
    json.dump(GHIDRAdict, outfile)
    
with open("/Users/harshilavlani/Headless_decomp/angrmcc.json", "a") as outfile:
    json.dump(angrdict, outfile)
#print(c.out)
#with open(TEXTPATH, "r") as a:
#    lines = a.read().splitlines()

#for line in lines:
#    mcc = line.split()[1]
#    filename = line.split('/')[2].split('(')[0]
#    print(filename)
#    totalmcc += int(mcc)

#print(totalmcc)
    
    