#!/bin/bash

# prompt user
echo "Starting process..."

# Create object files of all c source files
gcc -g -O -c *.c

# Create library using ar
ar rc liball.a *.o

# Prompt user
echo "liball.a created"
