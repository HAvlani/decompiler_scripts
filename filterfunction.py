angrdir = './decomp_funcs_angr' # path to angr decompiled functions
GHIDRAdir = './decomp_funcs_GHIDRA' # path to GHIDRA decompiled functions
GHIDRAfuncpath = './GHIDRAfuncnames' #path to text file containing names of all GHIDRA function names
angrfuncpath = './angrfuncnames' #path to text file containing names of all angr function names
GHIDRAfuncnames = []
angrfuncnames= []
commonfunctionpath = './commonfunctions' #path to text file where you want the list of common functions to be outputted to
angrnonduplicatepath = './angrnonduplicatefunction' #path to text file where you want the list of angr unique functions to be outputted to
GHIDRAnonduplicatepath = './GHIDRAnonduplicatefunction' #path to text file where you want the list of GHIDRA unique functions to be outputted to
GHIDRAexclusivepath = './GHIDRAexclusivefunction' #path to text file where you want the list of GHIDRA exclusive functions to be outputted to
angrexclusivepath = './angrexclusivefunction' #path to text file where you want the list of angr exclusive functions to be outputted to

'''
The purpose of this script is to output text files containing common, nonduplicate, and exclusive functions
'''
with open (GHIDRAfuncpath, 'r') as GHIDRAfuncs:
    GHIDRAnamelist = GHIDRAfuncs.read().splitlines()
    GHIDRAfuncnames = list(filter(("<global>").__ne__, GHIDRAnamelist))
    GHIDRAfuncnames = set(GHIDRAfuncnames)
    
with open (angrfuncpath, 'r') as angrfuncs:
    angrnamelist = angrfuncs.read().splitlines()
    angrfuncnames = list(filter(("<global>").__ne__, angrnamelist))
    angrfuncnames = set(angrfuncnames)

common_funcs = set(angrfuncnames).intersection(GHIDRAfuncnames)
angrexclusivefuncs = set(angrfuncnames).difference(GHIDRAfuncnames)
GHIDRAexclusivefuncs = set(GHIDRAfuncnames).difference(angrfuncnames)
angrnonduplicatefuncs = set(angrfuncnames)
GHIDRAnonduplicatefuncs = set(GHIDRAfuncnames)

print("common functions: " + str(len(common_funcs)))
print("angr exclusive functions: " + str(len(angrexclusivefuncs)))
print("GHIDRA exclusive functions: " + str(len(GHIDRAexclusivefuncs)))
print("angr nonduplicate functions: " + str(len(angrnonduplicatefuncs)))
print("GHIDRA nonduplicate functions: " + str(len(GHIDRAnonduplicatefuncs)))



with open(commonfunctionpath, "w") as a:
    for i in (list(common_funcs)):
        a.write(i + "\n")

with open(angrnonduplicatepath, "w") as a:
    for i in list(angrnonduplicatefuncs):
        a.write(i + "\n")
        
with open(GHIDRAnonduplicatepath, "w") as a:
    for i in list(GHIDRAnonduplicatefuncs):
        a.write(i + "\n")
        
with open(GHIDRAexclusivepath, "w") as a:
    for i in list(GHIDRAexclusivefuncs):
        a.write(i + "\n")

with open(angrexclusivepath, "w") as a:
    for i in list(angrexclusivefuncs):
        a.write(i + "\n")



