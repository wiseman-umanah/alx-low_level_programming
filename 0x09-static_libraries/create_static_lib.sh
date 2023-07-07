#!/bin/bash
find . -type f -name '*.c' -exec gcc -Wall -pedantic -Werror -Wextra -c {} \;
find . -type f -name '*.o' -exec ar rcs liball.a {} \;
