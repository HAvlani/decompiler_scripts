import json
import re
import os
'''
def countgoto_common():
    NamePathcommon = '/Users/harshilavlani/Headless_decomp/TypeError' #TODO
    FuncPathangr = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
    FuncPathGHIDRA = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/' 
    totalgotosangr = 0
    totalgotosGHIDRA = 0
    pattern = rb'goto ([a-zA-Z0-9_-]+);'

    with open(NamePathcommon, "r") as a:
        functions = a.read().splitlines()
    
    with open('/Users/harshilavlani/Headless_decomp/Numgotosangrcommon', "a") as angr, open('/Users/harshilavlani/Headless_decomp/NumgotosGHIDRAcommon', "a") as GHIDRA: 
        for Name in functions:
            angrfunctionfile = open(FuncPathangr + Name, 'rb') #TODO fix angr naming convention
            angrcontent = angrfunctionfile.read()
            angrfunctionfile.close()
            matchesangr = re.findall(pattern, angrcontent)
            angr.write(Name + " " + str(len(matchesangr)) + "\n")
            totalgotosangr += len(matchesangr)
            GHIDRAfunctionfile = open(FuncPathGHIDRA + Name, 'rb')
            GHIDRAcontent = GHIDRAfunctionfile.read()
            GHIDRAfunctionfile.close()
            matchesGHIDRA = re.findall(pattern, GHIDRAcontent)
            GHIDRA.write(Name + " " + str(len(matchesGHIDRA)) + "\n")
            totalgotosGHIDRA += len(matchesGHIDRA)
            
    print("angr gotos: " +  totalgotosangr)
    print("GHIDRA gotos: " +  totalgotosGHIDRA)
'''
def countgoto_all():
    FuncPathAngr = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angrcopy/' 
    FuncPathGHIDRA = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/' 
    #totalgotosangr = 0
    #totalgotosGHIDRA = 0
    angrdict = {}
    GHIDRAdict = {}
    pattern = rb"(goto ([a-zA-Z0-9_-]+);)"
    with open('/Users/harshilavlani/Headless_decomp/gotosangr.json', "a") as angr, open('/Users/harshilavlani/Headless_decomp/gotosGHIDRA.json', "a") as GHIDRA: 
        for filename in os.listdir(FuncPathAngr):
            angrfunctionfile = open(FuncPathAngr + filename, 'rb')
            angrcontent = angrfunctionfile.read()
            angrfunctionfile.close()
            matchesangr = re.findall(pattern, angrcontent)
            #angr.write(filename + " " + str(len(matchesangr)) + "\n")
            angrdict[filename] = len(matchesangr)
            #totalgotosangr += len(matchesangr)
            
        for filename in os.listdir(FuncPathGHIDRA):
            GHIDRAfunctionfile = open(FuncPathGHIDRA + filename, 'rb')
            GHIDRAcontent = GHIDRAfunctionfile.read()
            GHIDRAfunctionfile.close()
            matchesGHIDRA = re.findall(pattern, GHIDRAcontent)
            #GHIDRA.write(filename + " " + str(len(matchesGHIDRA)) + "\n")
            GHIDRAdict[filename] = len(matchesGHIDRA)
            #totalgotosGHIDRA += len(matchesGHIDRA)
        json.dump(angrdict, angr)
        json.dump(GHIDRAdict, GHIDRA)
    #print("GHIDRA gotos: " + str(totalgotosGHIDRA))
    #print("angr gotos: " + str(totalgotosangr))
    

countgoto_all()