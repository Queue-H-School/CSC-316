#include <stdio.h>
#define N 10 // declare length variable

int main(void)
{
    int a[N], i; // declare an int array of length N and an indexing int

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]); // scan in the number and store it in a[i]
    }
    printf("In reverse order: ");
    for (i = N - 1; i >= 0; i--)
    {
        printf("%d ", a[i]); // print out a[i]
    }
    printf("\n");
    return 0;
}