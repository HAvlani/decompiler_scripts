import delegator
import json
from tqdm import tqdm

ANGRNAMEPATH = './angrfuncnames' # path to text file with names of all angr functions

angrfuncs = {}
folderpath = './decomp_funcs_angr' #folder path to angr decompiled function folder
functionfilepath = './function-file angr.json' #output path 
errorpath = './angrfferrors' #path which to write errors during json loading

'''
The purpose of this script is to create a JSON file for angr that links a function name to a applicable file path
'''

def getmethod(FunctionName):
    c = delegator.run(f"joern --script joerngetname.sc --params FolderPath={folderpath},FunctionName={FunctionName}") #equivalent to cpg.method(methodName).toJsonPretty in joern
    
    try:
        j = json.loads(c.out)
        angrfuncs[j['name']] = j['filename'].split('/')[-1] #create a dictionary functionname : functionname + binaryname
    except:
        with open(errorpath, 'w') as outfile:
            outfile.write(c.out)
        
    
    


with open(ANGRNAMEPATH, 'r') as angr:
    funcnames = angr.read().splitlines()
    funcnames = list(set(funcnames)) #filter out duplicates
    funcnames = list(filter(("<global>").__ne__, funcnames)) #filter out functions with name "<global>"
    x = 0
    for i in tqdm(funcnames):
      getmethod(i)
     
    
        
with open(functionfilepath, 'w') as outfile:
   json.dump(angrfuncs, outfile)