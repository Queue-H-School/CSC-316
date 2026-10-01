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