#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC "$file" -o "${file%.c}.o"
gcc -shared -o liball.so *.o
