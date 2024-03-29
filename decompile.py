from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
import os


outputfolder = './decomp_funcs_Ghidra/'
program = getCurrentProgram()
ifc = DecompInterface()
ifc.openProgram(program)
function = getFirstFunction()

while function is not None:
    results = ifc.decompileFunction(function, 0, ConsoleTaskMonitor())
    output = results.getDecompiledFunction().getC()
    name = function.getName() + " " + program.getName()
    function = getFunctionAfter(function)
    filepath = os.path.join(outputfolder+ name)
    with open(filepath, "w") as f:
        f.write(output)

