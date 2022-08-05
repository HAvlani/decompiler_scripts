import delegator
import json
from tqdm import tqdm


GHIDRANAMEPATH = './GHIDRAfuncnames' # path to text file with names of all GHIDRA functions
GHIDRAfuncs = {}
folderpath = './decomp_funcs_GHIDRA' #folder path to GHIDRA decompiled function folder
functionfilepath = './function-file GHIDRA.json' #output path

'''
The purpose of this script is to create a JSON file for GHIDRA that links a function name to a applicable file path
'''




def getmethod(FunctionName):
    c = delegator.run(f"joern --script joerngetname.sc --params FolderPath={folderpath},FunctionName={FunctionName}")  #equivalent to cpg.method(methodName).toJsonPretty in joern
    j = json.loads(c.out)
    GHIDRAfuncs[j['name']] = j['filename'].split('/')[-1] #create a dictionary functionname : functionname + binaryname
    

    
with open(GHIDRANAMEPATH, 'r') as GHIDRA:
    funcnames = GHIDRA.read().splitlines()
    funcnames = list(set(funcnames)) #filter out duplicates
    funcnames = list(filter(("<global>").__ne__, funcnames)) # filter out global functions
    for i in tqdm(funcnames):
      getmethod(i)
      
    
        
with open(functionfilepath, 'w') as outfile:
   json.dump(GHIDRAfuncs, outfile)