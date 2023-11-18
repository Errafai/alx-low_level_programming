#!/bin/bash
gcc -c -fpcic *.c
gcc -shared *.o -o liball.so
