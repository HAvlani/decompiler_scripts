import os

def findangrerrors():
    GHIDRAEXCLUSIVE = './GHIDRAexclusivefunction' # path to text file with list of GHIDRA exclusive files 
    ANGRERRORPATH = './angrerror/' # path to folder which contains text files containg angr error functions. Files seperated by error type
    errorfuncnamelist = []
    GEAE = 0 # var to count how many angr error functions are also GHIDRA exclusive functions
    nonsubfunctions = []
    for filename in os.listdir(ANGRERRORPATH):
        ANGRERRORFILE = ANGRERRORPATH + filename
        with open(ANGRERRORFILE, 'r') as error_file:
            error_file = error_file.read()
            error_file = error_file.splitlines()
            for i in error_file:
                errorfuncnamelist.append(i.split(" ")[0]) #adds content of file to array with function names for all files
                if "sub_" not in i:
                    nonsubfunctions.append(i.split(" ")[0]) #adds content of file to array if the function is not prefixed by "sub_"
    with open(GHIDRAEXCLUSIVE, 'r') as GHIDRA:
        GElist = set(GHIDRA.read().splitlines())
        for i in GElist:
            if i in errorfuncnamelist:
                GEAE += 1 #find how many angr error functions are also GHIDRA exclusive functions
    print("angr error functions that are GHIDRA unique functions: " + str(GEAE))
    print("total angr error functions: " + str(len(errorfuncnamelist)))
    print("total angr non sub_ error functions: " + str(len(nonsubfunctions)))
                
        
    

