/**************************************************************
* Quinn Helfand
* CSC-316
* Strings and Command Line Lab 11/2/2016
* cmdline2.c
* Program that uses pointers to iterate over the argument vector
* and reports size, address, and contents of each argument
***************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	printf("Number of entries in argument vector: %d\n", argc);

	for (char **cptr = argv; cptr < argv + argc; cptr++) {
		printf("Value: %s, length: %d\n", *cptr, strlen(*cptr));

		if (*cptr[0] == '-')
		{
			char *start = *cptr + 1;
			for (char *ltr = start; ltr < start + strlen(*cptr); ltr++)
			{
				printf("%c\n", *ltr);
			}
		}
	}
	return 0;
}
