#!/bin/bash
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -c -fPIC "$file" -o "${file%.c}.o"
done
gcc -shared -o liball.so *.o
