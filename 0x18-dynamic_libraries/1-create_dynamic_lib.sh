#!/bin/bash

echo "Converting source code to machine code..."
gcc -c *.c

echo "Creating static library from object code..."
ar -rcs liball.a *.o
sleep 2

echo "Creating dynamic library from static library..."
gcc -shared -o liball.so liball.a

echo "Display symbol table for dynamic library..."
nm -D --defined-only liball.so
sleep 2

echo "Done!"
