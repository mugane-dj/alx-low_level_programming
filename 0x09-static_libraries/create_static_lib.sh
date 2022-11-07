#!/bin/bash

echo "Converting source code to machine code..."
gcc -c *.c

echo "Creating static library from object code..."
ar -rc liball.a *.o
sleep 2

echo "Indexing created static library..."
ranlib liball.a
sleep 2

echo "Checking all object files in standard library..."
ar -t liball.a
sleep 2

echo "Done!"
