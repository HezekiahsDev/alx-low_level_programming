#!/bin/bash
gcc -fpic -c *c
gcc -fpic -o liball.so *o -shared
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

