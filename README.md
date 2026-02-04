# Week 4 - C programming - arrays and strings, static and dynamic arrays

## Compiling C source code

Remember that you compile using gcc and should name the output file

`gcc myCode.c -o myCode`

## C libraries

The `<stdio.h>` and `<stdlib.h>` libraries are included by default.

For other libraries you must add further linking commands. 

eg. for the math library `<math.h>` you have to add `-lm` to your compile command.

`gcc myCode.c -o myCode -lm`

## Executing C programs

The executable file is stored on your local disk.

To execute the program you use the executable file name

`./myCode`

Note: `./` tells the operating system to look in the current, local directory for the executable file.
