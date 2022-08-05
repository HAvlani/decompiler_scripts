import json
import delegator
from tqdm import tqdm


GHIDRAvarproblempath = './GHIDRAvarproblems' # path to file were to write function names of variable counting problems for GHIDRA
GHIDRAFOLDERPATH = './decomp_funcs_GHIDRA' # path to GHIDRA folder containing functions
angrFOLDERPATH = './decomp_funcs_angr' # path to angr folder containing functions
GHIDRAvaroutput = './varsGHIDRA.json' # JSON file to which you want to write GHIDRA var output to
angrvaroutput = './varsangr.json' # JSON file to which you want to write angr var output to 
angrfunctionfilepath = './function-file angr.json'  # path where output of filefunctioncorrangr.py is saved
GHIDRAfunctionfilepath = './function-file GHIDRA.json' # path where output of filefunctioncorrGHIDRA.py is saved
commonfunctionpath = './commonfunctions' # path to text file which contains a list of the name of commonly decompiled functions

GHIDRAdict = {}
angrdict = {}
'''
The purpose of this script is to find the number of variables in the unique functions of GHIDRA and angr
'''

def countGHIDRA():
        c = delegator.run(f"joern --script joernscript.sc --params FolderPath='{GHIDRAFOLDERPATH}'") # output is string of filename and cpg.method(methodname).toJSON strings seperated by %
        out_arr = c.out.split("%")
        for i in range(1, len(out_arr), 2):
            temp_path = out_arr[i-1]
            temp_json = out_arr[i]
            x = json.loads(temp_json)
            name = temp_path.split("/")[-1] + "-vars" 
            try:
                GHIDRAdict[name] = x[-1]['order'] #creates a dictionary with functionname + "-vars": # of variables
            except:
                 with open(GHIDRAvarproblempath, "w") as GHIDRAvarproblems:
                     GHIDRAvarproblems.write(name)
                     GHIDRAdict[name] = 0
        with open(GHIDRAvaroutput, "a") as GHIDRAjson:
            json.dump(GHIDRAdict, GHIDRAjson)
    
def countangr():
        c = delegator.run(f"joern --script joernscript.sc --params FolderPath='{angrFOLDERPATH}'") # output is string of filename and cpg.method(methodname).toJSON strings seperated by %
        out_arr = c.out.split("%")
        for i in range(1, len(out_arr), 2):
            temp_path = out_arr[i-1]
            temp_json = out_arr[i]
            x = json.loads(temp_json)
            name = temp_path.split("/")[-1] + "-vars"
            try:
                angrdict[name] = x[-1]['order']
            except:
                angrdict[name] = 0
        with open(angrvaroutput, "a") as angrjson:
            json.dump(angrdict, angrjson)
        

def process_all():
    sumGHIDRA = 0
    sumangr = 0
    with open(GHIDRAvaroutput, "r") as GHIDRAjson:
        GHIDRAvars = json.load(GHIDRAjson)
    with open(angrvaroutput, "r") as angrjson:
        angrvars = json.load(angrjson)
    with open(angrfunctionfilepath, 'r') as angrff, open(GHIDRAfunctionfilepath, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
        for value in GHIDRAffdict.values():
            sumGHIDRA += GHIDRAvars[value + "-vars"]
        for value in angrffdict.values():
            sumangr += angrvars[value + "-vars"]
            
    print("GHIDRA vars: " + str(sumGHIDRA))
    print("angr vars: " + str(sumangr))
                    

def process_common():
    sumGHIDRA = 0
    sumangr = 0
    with open(GHIDRAvaroutput, "r") as GHIDRAjson:
        GHIDRAvars = json.load(GHIDRAjson)
    with open(angrvaroutput, "r") as angrjson:
        angrvars = json.load(angrjson)
    with open(angrfunctionfilepath, 'r') as angrff, open(GHIDRAfunctionfilepath, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
    with open(commonfunctionpath, "r") as commonfunctions:
        commonlist = commonfunctions.read().splitlines()
        for filename in tqdm(commonlist):
            filepathangr = angrffdict[filename]
            filepathGHIDRA = GHIDRAffdict[filename]
            sumGHIDRA += GHIDRAvars[filepathGHIDRA + "-vars"]
            sumangr += angrvars[filepathangr + "-vars"]
    print("GHIDRA vars: " + str(sumGHIDRA))
    print("angr vars: " + str(sumangr))
        
   
       


        




