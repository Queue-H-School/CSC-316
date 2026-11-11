/**************************************************************
* Quinn Helfand
* CSC-316
* Strings and Command Line Lab 11/2/2016
* cmdline5.c
* Program that uses pointers to iterate over the argument vector
* and reports size, address, and contents of each argument
***************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define ERRORMSG "Use of -f requires a filename.\n"

bool fflag = false;

int main(int argc, char *argv[])
{
    for (char **cptr = argv; cptr < argv + argc; cptr++) {

        if (*cptr[0] == '-')
        {
            char *start = *cptr + 1;

            // iterate over flags
            for (char *ltr = start; ltr < start + strlen(*cptr); ltr++)
            {
                // check for f
                if (*ltr == 'f')
                {
                    fflag = true;
                    break;
                }
            }
        }
        // fname check
        if (fflag)
        {
            if (cptr < argv + argc - 1)
            {
                cptr++;
            } else
            {
                printf(ERRORMSG);
                return 1;
            }
            if (*cptr[0] != '-')
            {
                printf("File is: %s\n", *cptr);
                return 0;
            }
            printf(ERRORMSG);
            return 1;
        }
    }
    return 0;
}