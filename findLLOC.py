import delegator
from tqdm import tqdm
import json

GHIDRAFUNCTIONPATH = './decomp_funcs_GHIDRA/'
ANGRFUNCTIONPATH = './decomp_funcs_angr/'
angrfunc_file = './function-file angr.json'
GHIDRAfunc_file = './function-file GHIDRA.json' 
GHIDRAOutputPath = './GHIDRALLOC.json'
angrOutputPath = './angrLLOC.json'
commonfunctionspath = './commonfunctions'
GHIDRAdict = {}
angrdict = {}
with open(angrfunc_file, 'r') as angrff, open(GHIDRAfunc_file, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)

def findLLOC():
    for filename in tqdm(GHIDRAffdict.values()):
        GHIDRAFUNCTIONFILE = GHIDRAFUNCTIONPATH + filename
        c = delegator.run('cat ' + GHIDRAFUNCTIONFILE + "| ./easysloc")
        lloc = c.out.split()[0]
        GHIDRAdict[filename] = int(lloc)
        
    for filename in tqdm(angrffdict.values()):
        ANGRFUNCTIONFILE = ANGRFUNCTIONPATH + filename
        c = delegator.run('cat ' + ANGRFUNCTIONFILE + "| ./easysloc")
        lloc = c.out.split()[0]
        angrdict[filename] = int(lloc)
        
    with open(GHIDRAOutputPath, "w") as outfile:
        json.dump(GHIDRAdict, outfile)
        
    with open(angrOutputPath, "w") as outfile:
        json.dump(angrdict, outfile)
        
def process_all():
    with open(GHIDRAOutputPath, "r") as GHIDRALLOC, open(angrOutputPath, "r") as angrLLOC:
        GHIDRALLOCdict = json.load(GHIDRALLOC)
        angrLLOCdict = json.load(angrLLOC)
    
    angrLLOCtotal = sum(angrLLOCdict.values())
    GHIDRALLOCtotal = sum(GHIDRALLOCdict.values())
    
    print("GHIDRA length: " + str(len(GHIDRALLOCdict)))
    print("GHIDRA total LLOC: " + str(GHIDRALLOCtotal))
    print("angr total: " + str(len(angrLLOCdict)))
    print("angr total LLOC: " + str(angrLLOCtotal))
    
def process_common():
    GHIDRALLOCcounter = 0
    angrLLOCcounter = 0
    with open(GHIDRAOutputPath, "r") as GHIDRALLOC, open(angrOutputPath, "r") as angrLLOC:
        GHIDRALLOCdict = json.load(GHIDRALLOC)
        angrLLOCdict = json.load(angrLLOC)
    with open(angrfunc_file, 'r') as angrff, open(GHIDRAfunc_file, 'r') as GHIDRAff:
        angrffdict =json.load(angrff)
        GHIDRAffdict = json.load(GHIDRAff)
    with open(commonfunctionspath, "r") as commonfunctions:
        commonlist = commonfunctions.read().splitlines()
    for filename in tqdm(commonlist):
        filepathangr = angrffdict[filename]
        filepathGHIDRA = GHIDRAffdict[filename]
        GHIDRALLOCcounter += GHIDRALLOCdict[filepathGHIDRA]
        angrLLOCcounter += angrLLOCdict[filepathangr]
    print("GHIDRA total LLOC: " + str(GHIDRALLOCcounter))
    print("angr total LLOC: " + str(angrLLOCcounter))

process_common()
