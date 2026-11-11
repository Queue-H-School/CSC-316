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

char **searchFlag(int argc, char *argv[]);

int main(int argc, char *argv[]) {

    char **fflag = searchFlag(argc, argv);
    printf("%s\n", *fflag);

    if (fflag == NULL)
    {
        printf("NULL\n");
    }

    // if (*fflag != (void *)0)
    // {
    //     // check out of bounds
    //     if (fflag >= argc + argv)
    //     {
    //         printf(ERRORMSG);
    //         return 0;
    //     }
    //     char *filename = *(fflag + 1);
    //     // arg declared filename if does not start with -
    //     if (filename[0] == '-')
    //     {
    //         printf(ERRORMSG);
    //         printf("%s\n", *filename);
    //         return 0;
    //     }
    //     printf("%s\n", *filename);
    // }
    return 0;
}

char **searchFlag(int argc, char *argv[])
{
    for (char **cptr = argv; cptr < argv + argc; cptr++) {

        if (*cptr[0] == '-')
        {
            char *start = *cptr + 1;

            // iterate over flags
            for (char *ltr = start; ltr < start + strlen(*cptr); ltr++)
            {
                // check for a and b
                if (*ltr == 'f')
                {
                    return cptr;
                }
            }
        }
    }
    char *empty = '\0';
    char **ptrempt = &empty;
    return ptrempt;
}
