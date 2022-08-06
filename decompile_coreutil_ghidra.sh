#!/bin/bash
BINARY_DIR=./coreutils-builder/*
for FILE in $BINARY_DIR; do ./run_decompile.sh $FILE; done
