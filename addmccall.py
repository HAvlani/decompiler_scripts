import os
import delegator
from tqdm import tqdm
import json
TEXTPATH = '/Users/harshilavlani/Documents/Terminal Saved Output'
GHIDRAFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
totalmcc = 0
finaldict= {}


for filename in tqdm(os.listdir(GHIDRAFUNCTIONPATH)):
    GHIDRAFUNCTIONFILE = GHIDRAFUNCTIONPATH + filename
    c = delegator.run('pmccabe ' + GHIDRAFUNCTIONFILE)
    try:
        mcc = c.out.split()[1]
        filename = c.out.split()[5].split('/')[-1].split('(')[0]
        finaldict[filename] = mcc
    except: 
        with open('/Users/harshilavlani/Headless_decomp/angr-errors/' + 'MCCError', "a") as a:
            a.write(filename + "\n")
        
    
    
print(finaldict)
with open("/Users/harshilavlani/Headless_decomp/mcc.json", "a") as outfile:
    json.dump(finaldict, outfile)
#print(c.out)
#with open(TEXTPATH, "r") as a:
#    lines = a.read().splitlines()

#for line in lines:
#    mcc = line.split()[1]
#    filename = line.split('/')[2].split('(')[0]
#    print(filename)
#    totalmcc += int(mcc)

#print(totalmcc)
    
    