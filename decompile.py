#
#@author  Harshil
#@category Test
#@keybinding
#@menupath
#@toolbar

#TODO: Add script code here
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor



program = getCurrentProgram()
ifc = DecompInterface()
ifc.openProgram(Program)
func = getFirstFunction()
i=1


while func is not None:
    results = ifc.decompileFunction(function, 0, ConsoleTaskMonitor())
    output += results.getDecompiledFunction().getC()
    name = str("function " + i)
    i+=1
    function = getFunctionAfter(function)
    with open(name, "w") as f:
        f.write(output)
    


