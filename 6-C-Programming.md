# C Programming

```c
# include <stdio.h>

int main(void) {
    // do stuff
    return 0;
}
```
## Data Types
<u>Integers</u>  
*default signed, but can be unsigned*  
\- int (4 bytes)  
\- short int  
\- long int  
\- byte

<u>Floats</u>  
\- float (single precision; 4 bytes)  
\- double (double precision; 8 bytes)  
\- long double (extended precision; ~12 bytes)  
*floats have precision loss*

<u>Boolean</u>  
\- 1 bit  
\- "true" or "false"

<u>Other Numbers</u>  
\- Octal  
\- Hexadecimal (begin with 0x)  
\- Binary (begin with 0b)

<u>Initializing a Float</u>  
\- can use many sci notation variants to describe floats  
\- append L for long (double precision)  
\- append F for float (single precision)

## Character Handling
<u>Chars</u>  
\- 1 byte  
\- can declare with single quotes  
\- can be signed or unsigned  
\- designed to represent an ASCII value

```c
# include <stdio.h>
# include <ctype.h>
```

`scanf(str, var)` $\rightarrow$ takes in a string from stdin  
`printf(str, var)` $\rightarrow$ prints a string to stdout

`getchar()` $\rightarrow$ scanf but for a single char  
`putchar(ch)` $\rightarrow$ printf but for a single char  
*can be simpler because strings in C are really weird*

## Arrays
\- take up a contiguous space in memory  
\- homogenous data type

<u>Initialization</u>
```c
int length = 5;

// most common
int arr[length];

// direct initialization
int arr[] = {1, 2, 3, 4};

// set all to zeros
int arr[length] = {0};

// designated initialization
int arr[length] = {[0] = 1, [2] = 3}
```

<u>Sizeof</u>  
`int length = sizeof(arr)`  
\- only works in the initial scope  
\- returns the length in bytes, so divide by element size  
`int length = sizeof(arr) / sizeof(arr[0])`  
`define SIZE ((int) (sizeof(arr) / sizeof(arr[0]))`

<u>Passing Arrays</u>  
\- hold a length variable to pass along

<u>Array Out of Bounds</u>  
\- out of bounds can cause weird problems, but won't throw an error

<u>Matrices</u>  
\- array of arrays  
`int m[5][9];`  
\- still in contiguous memory  
`m[0, 9] = m[1, 0]`  
\- can still initialize directly (as a 2d or 1d array)

## Strings

## Functions