#!/bin/bash
find . -type f -name '*.c' -exec gcc -c {} \;
find . -type f -name '*.o' -exec ar rcs liball.a {} \;
