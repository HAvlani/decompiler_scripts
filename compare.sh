#!/bin/bash
FOLDER1=~/Headless_decomp/decomp_funcs/
FOLDER2=~/Headless_decomp/Ghidra_funcs/
diff -qr $FOLDER1 $FOLDER2 && echo "files are the same" 