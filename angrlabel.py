import os
import json
from tqdm import tqdm

ANGRFUNCTIONPATH = './decomp_funcs_angr' #path to folder containing angr decompiled functions
angrfunctionfilepath = './function-file angr.json' #path to output of filefunctioncorrangr.py
angrlabelpath = './function-file GHIDRA.json' #JSON file where you want the output label file to be generated
commonfunctionpath = './commonfunctions' #path to file which containes names of common functions
angrdict = {}
'''
The purpose of this script is to create json file labelling if each unique angr function is empty or only containes abort statements
'''


def label():
    with open(angrfunctionfilepath, 'r') as angrff:
        angrffdict =json.load(angrff)
        
    for filename in tqdm(angrffdict.values()):
        file_size = os.path.getsize(ANGRFUNCTIONPATH + filename)
        with open(ANGRFUNCTIONPATH + filename, 'r') as readfile:
            if file_size <= 37:
                angrdict[filename] = "empty"
            elif "abort()" in readfile.read():
                angrdict[filename] = "abort_statement"
            elif "return" not in readfile.read():
                angrdict[filename] = "no return"
            else:
                angrdict[filename] = ""
        
    with open(angrlabelpath, "w") as angr:
        json.dump(angrdict, angr)

def process_all():
    emptycounter = 0
    abortcounter = 0
    noreturncounter = 0
    sub_counter = 0
    sub_emptycounter = 0
    sub_abortcounter= 0
    sub_noreturncounter = 0
    
    with open(angrlabelpath, "r") as angr:
        angrloaddict = json.load(angr)
        
    for (key, value) in angrloaddict.items():
        if "sub_" in key:
            sub_counter += 1
        if value == "empty":
            emptycounter += 1
            if "sub_" in key:
                sub_emptycounter += 1    
        elif value == "abort_statement":
            abortcounter += 1
            if "sub_" in key:
                sub_abortcounter += 1  
        elif value == "no return":
            noreturncounter += 1  
            if "sub_" in key:
                sub_noreturncounter += 1 
                
    print("total empty: " + str(emptycounter))
    print("total aborted: " + str(abortcounter))
    print("total no return: " + str(noreturncounter))
    print("total sub_ functions: " + str(sub_counter))
    print("total empty sub functions: " + str(sub_emptycounter))
    print("total aborted sub functions: " + str(sub_abortcounter))
    print("total no return sub_ functions: " + str(sub_noreturncounter))
    
    
def process_common():
    emptycounter = 0
    abortcounter = 0
    noreturncounter = 0
    sub_counter = 0
    sub_emptycounter = 0
    sub_abortcounter= 0
    sub_noreturncounter = 0
    
    with open(angrfunctionfilepath, 'r') as angrff:
        angrffdict = json.load(angrff)
        
    with open(commonfunctionpath, "r") as commonfunctions:
        commonlist = commonfunctions.read().splitlines()
        
    with open(angrlabelpath, "r") as angr:
        angrlabeldict = json.load(angr)
        
    commonangrffdict = {i : angrffdict[i] for i in commonlist}
    commonangrlabeldict = {filepath: angrlabeldict[filepath] for filepath in commonangrffdict.values()}
    
    for (key, value) in tqdm(commonangrlabeldict.items()):
        if "sub_" in key:
            sub_counter += 1
        if value == "empty":
            emptycounter += 1
            if "sub_" in key:
                sub_emptycounter += 1    
        elif value == "abort_statement":
            abortcounter += 1
            if "sub_" in key:
                sub_abortcounter += 1  
        elif value == "no return":
            noreturncounter += 1  
            if "sub_" in key:
                sub_noreturncounter += 1 
                
    print("total empty: " + str(emptycounter))
    print("total aborted: " + str(abortcounter))
    print("total no return: " + str(noreturncounter))
    print("total sub_ functions: " + str(sub_counter))
    print("total empty sub functions: " + str(sub_emptycounter))
    print("total aborted sub functions: " + str(sub_abortcounter))
    print("total no return sub_ functions: " + str(sub_noreturncounter))

process_all()
