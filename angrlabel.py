import os
import json

ANGRFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
angrdict = {}

for filename in os.listdir(ANGRFUNCTIONPATH):
    file_size = os.path.getsize(ANGRFUNCTIONPATH + filename)
    if file_size <= 37:
        angrdict[filename] = "empty"
    elif "cold" in filename:
        angrdict[filename] = "only_abort_statement"
    else:
        angrdict[filename] = ""
    '''
    GHIDRAfunctionfile = open(ANGRFUNCTIONPATH + filename, 'rb')
    GHIDRAcontent = GHIDRAfunctionfile.read()
    GHIDRAfunctionfile.close()
    GHIDRAdict[filename] = "bad_data"
    '''
with open('/Users/harshilavlani/Headless_decomp/angrlabel.json', "a") as angr:
    json.dump(angrdict, angr)