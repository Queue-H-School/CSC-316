/************************************
 *  Quinn Helfand
 *  9/28/2026
 ***********************************/

# include <stdio.h>
# include <math.h>

int main() {

	int i;
	short int si;

	printf("Size of char: %zu (%zu bits)\n", sizeof(char), 8 * sizeof(char));
	printf("\tValues %g to %g\n", -pow(2, (8 * sizeof(char)) - 1), pow(2, (8 * sizeof(char) - 1)) - 1);

	printf("Size of unsigned char: %zu (%zu bits)\n", sizeof(unsigned char), 8 * sizeof(unsigned char));
	printf("\tValues 0 to %g\n", pow(2, (8 * sizeof(unsigned char))) - 1);

	printf("Size of short int: %zu (%zu bits)\n", sizeof(short int), 8 * sizeof(short int));
	printf("\tValues %g to %g\n", -pow(2, (8 * sizeof(short int)) - 1), pow(2, (8 * sizeof(short int) - 1)) - 1);

	printf("Size of unsigned short: %zu (%zu bits)\n", sizeof(unsigned short), 8 * sizeof(unsigned short));
	printf("\tValues 0 to %g\n", pow(2, (8 * sizeof(unsigned short))) - 1);

	printf("Size of int: %zu (%zu bits)\n", sizeof(int), 8 * sizeof(int));
	printf("\tValues %g to %g\n", -pow(2, (8 * sizeof(int)) - 1), pow(2, (8 * sizeof(int) - 1)) - 1);

	printf("Size of unsigned int: %zu (%zu bits)\n", sizeof(unsigned int), 8 * sizeof(unsigned int));
	printf("\tValues 0 to %g\n", pow(2, (8 * sizeof(unsigned int))) - 1);


}

