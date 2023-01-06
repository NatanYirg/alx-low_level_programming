#!/bin/bash
gcc -wall -pedantic -Werror -wextra -c *.c
ar rc liball.a *.o
