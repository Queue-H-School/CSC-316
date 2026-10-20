/* shout.c
 * Reads characters from stdin and prints back out to stdout, but with all lowercase converted to uppercase.
 * Written by: Quinn Helfand
 * Course: CSC-316
 * 10/5/2026
*/
#include <stdio.h>
#include <string.h>

int main (void) {
    int ch = 0;
    printf("Enter a sentence to shout: ");

    do {
        ch = getchar();

        // to uppercase if necessary
        if (ch >= 'a' && ch <= 'z') {
            ch -= 'a' - 'A';
        }
        putchar(ch);
    } while (ch != EOF);

    return 0;
}