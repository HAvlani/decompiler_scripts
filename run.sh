#!/bin/bash

TMP_DIR=./tmp_project
GHIDRA_DIR=~/downloads/ghidra_10.1.4_PUBLIC


if [[ $# -ne 2 ]]; then
	echo "Usage: ./run.sh binary_file output_file" >&2
	exit 2
fi

if [ -d "$TMP_DIR" ]; then rm -rf $TMP_DIR; fi

mkdir $TMP_DIR

$GHIDRA_DIR/support/analyzeHeadless $TMP_DIR headless_project -import $1 -postscript decompile.py $2

