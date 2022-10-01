#!/bin/bash
gcc -c -wall -werror -wextra -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
rainlib liball.a

