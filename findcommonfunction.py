import os
#import ipdb
#ipdb.set_trace()
angrdir = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
GHIDRAdir = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
newangr = []
newGHIDRA = []
for filename in os.listdir(angrdir):
    newangr.append(filename.split()[-1] + " " + filename.split()[0])
for filename in os.listdir(GHIDRAdir):
    newGHIDRA.append(filename)
intersection = set(newangr).intersection(newGHIDRA)
with open('/Users/harshilavlani/Headless_decomp/commonfunctions', "a") as a:
    for i in range(len(list(intersection))):
        a.write(list(intersection)[i] + "\n")



