#!/bin/bash
FOLDER1=~/Headless_decomp/decomp_funcs_Ghidra/
FOLDER2=~/Headless_decomp/Ghidra_funcs_gt/
diff -qr $FOLDER1 $FOLDER2 && echo "files are the same"  