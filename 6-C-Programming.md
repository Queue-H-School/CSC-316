# C Programming

```c++
# include <stdio.h>

int main(void) {
    // do stuff
    return 0;
}
```
## Data Types
<u>Integers</u></br>
*default signed, but can be unsigned*</br>
\- int (4 bytes)</br>
\- short int</br>
\- long int</br>
\- byte</br>

<u>Floats</u></br>
\- float (single precision; 4 bytes)</br>
\- double (double precision; 8 bytes)</br>
\- long double (extended precision; ~12 bytes)</br>
*floats have precision loss*

<u>Boolean</u></br>
\- 1 bit</br>
\- "true" or "false"</br>

<u>Other Numbers</u></br>
\- Octal</br>
\- Hexadecimal (begin with 0x)</br>
\- Binary (begin with 0b)</br>

<u>Initializing a Float</u></br>
\- can use many sci notation variants to describe floats</br>
\- append L for long (double precision)</br>
\- append F for float (single precision)</br>

## Character Handling
<u>Chars</u></br>
\- 1 byte</br>
\- can declare with single quotes</br>
\- can be signed or unsigned</br>
\- designed to represent an ASCII value</br>

```c++
# include <stdio.h>
# include <ctype.h>
```
`scanf(str, var)` $\rightarrow$ takes in a string from stdin</br>
`printf(str, var)` $\rightarrow$ prints a string to stdout</br>

`getchar()` $\rightarrow$ scanf but for a single char</br>
`putchar(ch)` $\rightarrow$ printf but for a single char</br>
*can be simpler because strings in C are really weird*</br>