#include <stdio.h>

int main(void) {
    int ch = 0;

    printf("Enter a sentence to encode: ");

    do {
        ch = getchar();

        // increment lower case
        if (ch >= 'a' && ch <= 'z') {
            int alphaIndex = ch - 'a';
            ch = 'a' + ((alphaIndex + 3) % 26);
        }

        // increment uppercase
        if (ch >= 'A' && ch <= 'Z') {
            int alphaIndex = ch - 'A';
            ch = 'A' + ((alphaIndex + 3) % 26) - 1;
        }

        putchar(ch);
    } while(ch != EOF);
    return 0;
}
