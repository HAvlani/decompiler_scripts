import json
import matplotlib.pyplot as plt

angrvarpath = './varsangr.json' #path to json file containing angr variable counts
angrmccpath = './angrmcc.json' #path to json file containing GHIDRA variable counts
angrffpath = './function-file angr.json' #path to json file containing the angr function file json file
angrLLOCpath = './angrLLOC.json' #path to json file containg angr LLOC counts
'''
The purpose of this script is to evaluate how good of a metric the number of variables is. We plot variables by mcc per line of LLOC to see if there is any correlation between variables and complexity per logical line of code.
'''
varlist = []
mccLLOClist = []

with open(angrLLOCpath, 'r') as angrLLOC:
    angrLLOCdict = json.load(angrLLOC)
    
with open(angrvarpath, 'r') as angrvar:
    angrvardict = json.load(angrvar)
    
with open(angrmccpath, 'r') as angrmcc:
    angrmccdict = json.load(angrmcc)

with open(angrffpath, 'r') as angrff:
    angrffdict = json.load(angrff)
    
for i in angrffdict.values():
    num_variables_index = i + "-vars"
    if angrLLOCdict[i] > 0:
        varlist.append(angrvardict[i + "-vars"])
        mccLLOClist.append(angrmccdict[i]/angrLLOCdict[i])
    
plt.scatter(varlist, mccLLOClist) #plots number of variables by mcc per line of LLOC
plt.show()