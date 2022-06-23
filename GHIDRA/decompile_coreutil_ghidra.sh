#!/bin/bash
for FILE in ./coreutils-builder/bin/*; do ./run_decompile.sh $FILE; done
