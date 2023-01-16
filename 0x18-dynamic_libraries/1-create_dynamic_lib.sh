#!/bin/bash

echo "Converting source code to machine code..."
gcc -c -fPIC *.c

echo "Creating dynamic library from object code..."
gcc -shared -o liball.so *.o

echo "Display symbol table for dynamic library..."
nm -D liball.so
sleep 2

echo "Done!"
