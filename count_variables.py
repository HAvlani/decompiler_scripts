import ipdb;
import json

import delegator

GHIDRAFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_GHIDRA/'
TESTPATH = "/Users/harshilavlani/Headless_decomp/untitled folder"
ANGRFUNCTIONPATH = '/Users/harshilavlani/Headless_decomp/decomp_funcs_angr/'
GHIDRAdict = {}
def count():
    #print(filename)
        c = delegator.run("joern --script joernscript.sc --params FolderPath='decomp_funcs_GHIDRA'")
        out_arr = c.out.split("%")
        #print(out_arr)
        #print(out_arr)
        
        
        
        #ipdb.set_trace()
        for i in range(1, len(out_arr), 2):
            #print(i)
            temp_path = out_arr[i-1]
            temp_json = out_arr[i]
            
            #print("TP: ")
            #print(temp_path)
            #print("TJ ") 
            #print(temp_json)
            #xprint()
            
    
            x = json.loads(temp_json)
            #print(x)
            name = temp_path.split("/")[-1] + "-vars"
            #print(name) 
            #print(x[0]) 
            #print("*********")
            #print(name) 
            #print(x[-1])
            try:
                GHIDRAdict[name] = x[-1]['order']
            except:
                 with open('/Users/harshilavlani/Headless_decomp/GHIDRAproblems', "a") as GHIDRAvarproblems:
                     GHIDRAvarproblems.write(name)
                     GHIDRAdict[name] = 0
        #print(GHIDRAdict)
        
        with open('/Users/harshilavlani/Headless_decomp/varsGHIDRA.json', "a") as GHIDRAjson:
            json.dump(GHIDRAdict, GHIDRAjson)
        #print(len(x))
        
        #if i == len(out_arr) - 1:

def process():
     with open('/Users/harshilavlani/Headless_decomp/varsGHIDRA.json', "r") as GHIDRAjson:
         x = json.load(GHIDRAjson)
         print(len(x))

        

    
    #with open("/Users/harshilavlani/Headless_decomp/GHIDRAexcess", 'a') as GHIDRAexcess, open("/Users/harshilavlani/Headless_decomp/GHIDRA vars/" + , "a") as GHIDRAjson:
     #   try:
      #      json.dump(GHIDRAdict, GHIDRAjson)
       # except:
        #    GHIDRAexcess.write(GHIDRAdict)
    
process()

        
#for filename in os.listdir(GHIDRAFUNCTIONPATH):
 #   count(filename)


