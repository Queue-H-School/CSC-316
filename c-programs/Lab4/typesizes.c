/************************************
 *  Quinn Helfand
 *  9/28/2026
 ***********************************/

# include <stdio.h>
# include <stdbool.h>
# define SMALLINT 32767
# define BIGINT 2147483647
# define HUGEINT 9223372036854775807
# define MASSIVEINT 9223372036854775808U

int main() {

	int i;
	short int si;

	printf("Size of short int: %zu (%zu bits)\n", sizeof(short int), 8 * sizeof(short int));
	printf("Size of unsigned short: %zu (%zu bits)\n", sizeof(unsigned short), 8 * sizeof(unsigned short));
	printf("Size of int: %zu (%zu bits)\n", sizeof(int), 8 * sizeof(int));
	printf("Size of unsigned int: %zu (%zu bits)\n", sizeof(unsigned int), 8 * sizeof(unsigned int));
	printf("Size of long int: %zu (%zu bits)\n", sizeof(long int), 8 * sizeof(long int));
	printf("Size of long long int: %zu (%zu bits)\n", sizeof(long long int), 8 * sizeof(long long int));
	printf("\n");

	printf("Size of size_t: %zu (%zu bits)\n", sizeof(size_t), 8 * sizeof(size_t));
	printf("Size of char: %zu (%zu bits)\n", sizeof(char), 8 * sizeof(char));
	printf("Size of boolean: %zu (%zu bits)\n", sizeof(bool), 8 * sizeof(bool));
	printf("\n");

	printf("Size of SMALLINT: %zu (%zu bits)\n", sizeof(SMALLINT), 8 * sizeof(SMALLINT));
	printf("Size of BIGINT: %zu (%zu bits)\n", sizeof(BIGINT), 8 * sizeof(BIGINT));
	printf("Size of HUGEINT: %zu (%zu bits)\n", sizeof(HUGEINT), 8 * sizeof(HUGEINT));
	printf("Size of MASSIVEINT: %zu (%zu bits)\n", sizeof(MASSIVEINT), 8 * sizeof(MASSIVEINT));
	printf("\n");
}

