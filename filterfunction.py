import os
#import ipdb
#ipdb.set_trace()
angrdir = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
GHIDRAdir = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRAtest/'
newangr = []
newGHIDRA = []
angrfunctions = set()
GHIDRAfunctions = set()
for filename in os.listdir(angrdir):
    newangr.append(filename)
    newGHIDRA.append(filename)
intersection = set(newangr).intersection(newGHIDRA)

with open('/Users/harshilavlani/Headless_decomp/commonfunctions', "a") as a:
    for i in (list(intersection)):
        print(i)
        a.write(i + "\n")
        
for i in newangr:
    functionname = i.split()[0]
    angrfunctions.add(functionname)
    
for i in newGHIDRA:
    functionname = i.split()[0]
    GHIDRAfunctions.add(functionname)

with open('/Users/harshilavlani/Headless_decomp/angrnonduplicatefunction', "a") as a:
    for i in list(angrfunctions):
        a.write(i + "\n")
        
with open('/Users/harshilavlani/Headless_decomp/GHIDRAnonduplicatefunction', "a") as a:
    for i in list(GHIDRAfunctions):
        a.write(i + "\n")
    