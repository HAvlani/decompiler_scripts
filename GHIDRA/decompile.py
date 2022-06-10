#
#@author  Harshil
#@category Test
#@keybinding
#@menupath
#@toolbar

#TODO: Add script code here
from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import os



program = getCurrentProgram()
ifc = DecompInterface()
ifc.openProgram(program)
function = getFirstFunction()
i=1


while function is not None:
    results = ifc.decompileFunction(function, 0, ConsoleTaskMonitor())
    output = results.getDecompiledFunction().getC()
    name = "function " + str(i)
    i+=1
    function = getFunctionAfter(function)
    filepath = os.path.join('/Users/harshilavlani/Headless_decomp/decomp_funcs_Ghidra/'+ name)
    with open(filepath, "w") as f:
        f.write(output)
