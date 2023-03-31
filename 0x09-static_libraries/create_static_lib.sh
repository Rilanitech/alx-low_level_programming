#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -crc liball.a *.o
