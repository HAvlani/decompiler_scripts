import delegator
from tqdm import tqdm
import json

GHIDRAFUNCTIONPATH = './decomp_funcs_GHIDRA' #paath to folder containing GHIDRA decompiled functions
ANGRFUNCTIONPATH = './decomp_funcs_angr' #path to folder containing angr decompiled functions
angrfunctionfilepath = './function-file angr.json' #path to JSON file generated by filefunctioncorrangr.py
GHIDRAfunctionfilepath = './function-file GHIDRA.json' #path to JSON file generated by filefunctioncorrGHIDRA.py
GHIDRAMCCPATH  = './GHIDRAmcc.json' #path to JSON file to where you want the GHIDRA MCC output to be generated
angrMCCPATH = './angrmcc.json' #path to JSON file to where you want
commonfunctionpath = './commonfunctions' #path to file which containes names of common functions
'''
The purpose of this script is to calculate the mcc for every unique function in the decompiled output and aggregate it
'''
def mcc():
    GHIDRAdict = {}
    angrdict = {}
    
    with open(angrfunctionfilepath, 'r') as angrff, open(GHIDRAfunctionfilepath, 'r') as GHIDRAff:
            angrffdict =json.load(angrff)
            GHIDRAffdict = json.load(GHIDRAff)

    for filename in tqdm(GHIDRAffdict.values()):
        GHIDRAFUNCTIONFILE = GHIDRAFUNCTIONPATH + filename
        c = delegator.run('pmccabe ' + GHIDRAFUNCTIONFILE) #gets mcc value from pmmcabe tool
        mcc = c.out.split()[1]
        filename = c.out.split()[5].split('/')[-1].split('(')[0]
        GHIDRAdict[filename] = int(mcc)
       
    for filename in tqdm(angrffdict.values()):
        ANGRFUNCTIONFILE = ANGRFUNCTIONPATH + filename
        c = delegator.run('pmccabe ' + ANGRFUNCTIONFILE)
        mcc = c.out.split()[1]
        filename = c.out.split()[5].split('/')[-1].split('(')[0]
        angrdict[filename] = int(mcc)
        
    with open(GHIDRAMCCPATH, "w") as outfile:
        json.dump(GHIDRAdict, outfile)
        
    with open(angrMCCPATH, "w") as outfile:
        json.dump(angrdict, outfile)

    
def process_all():
    with open(GHIDRAMCCPATH, "r") as outfile:
        GHIDRAdict = json.load(outfile)
        print("GHIDRA length: " + str(len(GHIDRAdict)))
        print("Total GHIDRA mcc: " + str(sum(GHIDRAdict.values())))
        
    with open(angrMCCPATH, "r") as outfile:
        angrdict = json.load(outfile)
        print("angr length: " + str(len(angrdict)))
        print("Total angr mcc: " + str(sum(angrdict.values())))

def process_common():
    GHIDRAmcccounter = 0
    angrmcccounter = 0
    
    with open(angrfunctionfilepath, 'r') as angrff, open(GHIDRAfunctionfilepath, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
        
    with open(commonfunctionpath, "r") as commonfunctions:
        commonlist = commonfunctions.read().splitlines()
        
    with open(GHIDRAMCCPATH, "r") as GHIDRAmcc, open(angrMCCPATH, "r") as angrmcc:
        GHIDRAmccdict = json.load(GHIDRAmcc)
        angrmccdict = json.load(angrmcc)
        
    for filename in commonlist:
        filepathangr = angrffdict[filename]
        filepathGHIDRA = GHIDRAffdict[filename]
        GHIDRAmcccounter += GHIDRAmccdict[filepathGHIDRA]
        angrmcccounter += angrmccdict[filepathangr]
        
    print("Total GHIDRA mcc: " + str(GHIDRAmcccounter))
    print("Total angr mcc: " + str(angrmcccounter))
    

        

