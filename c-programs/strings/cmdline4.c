/**************************************************************
* Quinn Helfand
* CSC-316
* Strings and Command Line Lab 11/2/2016
* cmdline4.c
* Program that uses pointers to iterate over the argument vector
* and reports size, address, and contents of each argument
***************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    bool aflag = false;
    bool bflag = false;

    for (char **cptr = argv; cptr < argv + argc; cptr++) {
        // printf("Value: %s, length: %d\n", *cptr, strlen(*cptr));

        if (*cptr[0] == '-')
        {
            char *start = *cptr + 1;

            // iterate over flags
            for (char *ltr = start; ltr < start + strlen(*cptr); ltr++)
            {
                // check for a and b
                if (*ltr == 'a')
                {
                    aflag = true;
                } else if (*ltr == 'b')
                {
                    bflag = true;
                }
            }
        }
    }
    if (aflag && bflag)
    {
        printf("Uses both a and b flags\n");
    } else if (aflag) {
        printf("Uses a but not b\n");
    } else if (bflag)
    {
        printf("Uses b but not a\n");
    }
    return 0;
}
