# Bash Scripting

<u>Anatomy of a Script</u>  
First line: `#!/bin/bash` $\leftarrow$ identifies the file as a bash script  
Last line: `fi`  
Comments: marked by `#` (line only)  
Permission: `chmod +x filename`  
Run: `./filename`  
Command Substitution: `$( command )`

<u>Positional Parameters</u>  
`$0` name of the script  
`$#` number of positional parameters  
`$*` lists all positional parameters (single string when in double quotes)  
`$@` same as $* (list of strings when in double quotes)  
`$1 - $10` reference individual positional parameters

<u>Variables</u>  
Creation: `varname=value` or `read varname`  
Access: `$varname`  
Set: `varname=value`

<u>Conditional Statements</u>
```bash
if test expression
then
    command
else
    command
fi
```
or
```
if [ string/numeric expression ]
then
    command
else
    command
fi
```

<u>Logical Operators</u>  
`-a` AND  
`-o` OR  
`-ge` greater than or equal to  
`-le` less than or equal to

<u>The Read Command</u>  
`read varname` reads a line from stdin to the variable  
`read var1 var2` read a line from stdin to the whitespace and puts the first word in var1 and the second in var2  
`read` reads a line from stdin and puts it in \$REPLY  
`read varname` puts the stdin input in varname  
`read -p string` prints a string  
`read -r` allows the input to contain a backslash

<u>String Testing</u>  
`[ string1 = string2 ]` equality check  
`[ string1 != string2 ]` inequality check  
`[ string]` check for null  
`[ -z string ]` check for zero length  
`[ -n string ]` check for non-zero length

<u>File Testing Operators</u>  
*with path after operator*  
`-d` directory existence  
`-e` path existence  
`-f` regular file existence (not a directory)  
`-o` file exists and is owned by current user  
`-r`, `-w`, `-x` file is read/write/executable  
`-s` file is nonzero size

<u>File Comparisons</u>  
*returns true if*  
`[ file1 -nt file2 ]` file1 is newer than file2  
`[ file1 -ot file2 ]` file1 is older than file2  
`[ file1 -ef file2 ]` files have the same device and inode numbers (hard link)

<u>Exit Status</u>  
\- every commands return value (all have one) can be accessed with `$?`  
`0` means success and anything else is an error code  
`exit` terminates the script: mainly used to exit is some condition is true  
`exit $?` will return script error status

<u>Notes</u>  
`-x` debug--prints out commands as they run  
\- use double parenthesis to do math operations

<u>Arrays</u>  
`array_name=( "one" "two" "three" )` to initialize  
`${ array_name[i] }` to access  
`$array_name` will just retrieve the first value

## Loops
<u>While</u>
```bash
while [ expression ]
do 
  commands
done
```
<u>For each</u>
```bash
for var in $ [ values ]
do 
  command
done
```
<u>For</u>
```bash
for i in $( seq start end inc )
do
  commands
done
```