import json
import re
from tqdm import tqdm

def countgoto_all():
    FuncPathAngr = './decomp_funcs_angr/' 
    FuncPathGHIDRA = './decomp_funcs_GHIDRA/' 
    angrfunc_file = './function-file angr.json'
    GHIDRAfunc_file = './function-file GHIDRA.json' 
    OutputFileangr = './gotosangr.json'
    OutputFileGHIDRA = './gotosGHIDRA.json'
    angrdict = {}
    GHIDRAdict = {}
    GHIDRAffdict = {}
    angrffdict = {}
    pattern = rb"(goto ([a-zA-Z0-9_-]+);)"
    with open(angrfunc_file, 'r') as angrff, open(GHIDRAfunc_file, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
    with open(OutputFileangr, "w") as angr, open(OutputFileGHIDRA, "w") as GHIDRA: 
        for filename in angrffdict.values():
            angrfunctionfile = open(FuncPathAngr + filename, 'rb')
            angrcontent = angrfunctionfile.read()
            angrfunctionfile.close()
            matchesangr = re.findall(pattern, angrcontent)
            angrdict[filename] = len(matchesangr)
            totalgotosangr += len(matchesangr)
            
        for filename in GHIDRAffdict.values():
            GHIDRAfunctionfile = open(FuncPathGHIDRA + filename, 'rb')
            GHIDRAcontent = GHIDRAfunctionfile.read()
            GHIDRAfunctionfile.close()
            matchesGHIDRA = re.findall(pattern, GHIDRAcontent)
            GHIDRAdict[filename] = len(matchesGHIDRA)
            totalgotosGHIDRA += len(matchesGHIDRA)
        json.dump(angrdict, angr)
        json.dump(GHIDRAdict, GHIDRA)

def process_all():
    angrgotofile = './gotosangr.json'
    GHIDRAgotofile = './gotosGHIDRA.json'
    gotosangr = 0
    gotosGHIDRA = 0
    with open(angrgotofile, 'r') as angrgotofile, open(GHIDRAgotofile, 'r') as GHIDRAgotofile:
        angrgotodict =json.load(angrgotofile)
        GHIDRAgotodict = json.load(GHIDRAgotofile)
        
    gotosangr = sum(angrgotodict.values())  
    gotosGHIDRA = sum(GHIDRAgotodict.values())
    
    print("GHIDRA Length: " + str(len(GHIDRAgotodict)))
    print("GHIDRA gotos: " + str(gotosGHIDRA))
    print("angr Length: " + str(len(angrgotodict)))
    print("angr gotos: " + str(gotosangr))
    
def process_common():
    angrgotofile = './gotosangr.json'
    GHIDRAgotofile = './gotosGHIDRA.json'
    gotosangr = 0
    gotosGHIDRA = 0
    angrfunc_file = './function-file angr.json'
    GHIDRAfunc_file = './function-file GHIDRA.json' 
    commonfunctionspath = './commonfunctions'
    with open(angrfunc_file, 'r') as angrff, open(GHIDRAfunc_file, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
    with open(angrgotofile, 'r') as angrgotofile, open(GHIDRAgotofile, 'r') as GHIDRAgotofile:
        angrgotodict =json.load(angrgotofile)
        GHIDRAgotodict = json.load(GHIDRAgotofile)
    with open(commonfunctionspath, "r") as commonfunctions:
        commonlist = commonfunctions.read().splitlines()
    for filename in tqdm(commonlist):
        filepathangr = angrffdict[filename]
        filepathGHIDRA = GHIDRAffdict[filename]
        gotosangr += angrgotodict[filepathangr]
        gotosGHIDRA += GHIDRAgotodict[filepathGHIDRA]
    print("GHIDRA gotos: " + str(gotosGHIDRA))
    print("angr gotos: " + str(gotosangr))
      

