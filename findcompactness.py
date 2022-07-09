import os
def findcompactness_common():
    NamePathCommon = ''
    FuncPathangr = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
    FuncPathGHIDRA = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
    totalcharactersangr = 0 
    totallinesangr = 0
    totallinesGHIDRA = 0
    totalcharactersGHIDRA = 0
    with open(NamePathCommon, "r") as a:
        functions = a.read().splitlines()
        
    with open('/Users/harshilavlani/Headless_decomp/compactnessangrcommon', "a") as angr, open('/Users/harshilavlani/Headless_decomp/compactnessGHIDRAcommon', "a") as GHIDRA:
        for name in functions:
            angrfunctionfile = open(FuncPathangr + name, 'r') #TODO fix angr naming convention
            angrcontent = angrfunctionfile.read()
            for countangr, line in enumerate(angrcontent):
                pass
            num_linesangr = countangr + 1
            totallinesangr += num_linesangr
            angrfunctionfile.close()
            num_charactersangr = len(angrcontent)
            totalcharactersangr += num_charactersangr
            angr.write(name + "characters: " + num_charactersangr + " lines: " + num_linesangr)
            GHIDRAfunctionfile = open(FuncPathGHIDRA + name, 'r')
            GHIDRAcontent = GHIDRAfunctionfile.read()
            for countGHIDRA, line in enumerate(GHIDRAcontent):
                pass
            GHIDRAfunctionfile.close()
            num_linesGHIDRA = countGHIDRA + 1
            totallinesGHIDRA += num_linesGHIDRA
            num_charactersGHIDRA = len(GHIDRAcontent)
            totalcharactersGHIDRA += num_charactersGHIDRA
            GHIDRA.write(name + "characters: " + num_charactersGHIDRA + " lines: " + num_linesGHIDRA)
            
    print("total characters angr: " + totalcharactersangr)
    print("total lines angr: " + totallinesangr)
    print("total characters GHIDRA: " + totalcharactersGHIDRA)
    print("total lines GHIDRA: " + totalcharactersGHIDRA)
    
    
def findcompactness_all():
    FuncPathAngr = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angrcopy/' 
    FuncPathGHIDRA = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/' 
    totalcharactersangr = 0 
    totallinesangr = 0
    totallinesGHIDRA = 0
    totalcharactersGHIDRA = 0
    with open('/Users/harshilavlani/Headless_decomp/compactnessangrall', "a") as angr, open('/Users/harshilavlani/Headless_decomp/compactnessGHIDRAall', "a") as GHIDRA: 
        for filename in os.listdir(FuncPathAngr):
            angrfunctionfile = open(FuncPathAngr + filename, 'rb')
            angrcontent = angrfunctionfile.read()
            
            #num_linesangr = len(angrfunctionfile.readlines())
            num_linesangr = sum(1 for line in open(FuncPathAngr + filename, 'rb'))
            angrfunctionfile.close()
            #for countangr, line in enumerate(angrcontent):
             #   pass
            #num_linesangr = countangr + 1
            totallinesangr += num_linesangr
            angrfunctionfile.close()
            num_charactersangr = len(angrcontent)
            totalcharactersangr += num_charactersangr
            angr.write(filename + " characters: " + str(num_charactersangr) + " lines: " + str(num_linesangr) + "\n")
           
        for filename in os.listdir(FuncPathGHIDRA):
            GHIDRAfunctionfile = open(FuncPathGHIDRA + filename, 'rb')
            GHIDRAcontent = GHIDRAfunctionfile.read()
            num_linesGHIDRA = sum(1 for line in open(FuncPathGHIDRA + filename, 'rb'))
            #num_linesGHIDRA = len(GHIDRAfunctionfile.readlines())
            #for countGHIDRA, line in enumerate(GHIDRAcontent):
             #   pass
            GHIDRAfunctionfile.close()
            #num_linesGHIDRA = countGHIDRA + 1
            totallinesGHIDRA += num_linesGHIDRA
            num_charactersGHIDRA = len(GHIDRAcontent)
            totalcharactersGHIDRA += num_charactersGHIDRA
            GHIDRA.write(filename + " characters: " + str(num_charactersGHIDRA) + " lines: " + str(num_linesGHIDRA) + '\n')
            
    print("total characters angr: " + str(totalcharactersangr))
    print("total lines angr: " + str(totallinesangr))
    print("total characters GHIDRA: " + str(totalcharactersGHIDRA))
    print("total lines GHIDRA: " + str(totallinesGHIDRA))
    
    
findcompactness_all()