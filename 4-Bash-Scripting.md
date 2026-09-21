# Bash Scripting

<u>Anatomy of a Script</u></br>
First line: `#!/bin/bash` $\leftarrow$ identifies the file as a bash script</br>
Last line: `fi`</br>
Comments: marked by `#` (line only)</br>
Permission: `chmod +x filename`</br>
Run: `./filename`</br>
Command Substitution: `$( command )`

<u>Positional Parameters</u></br>
`$0` name of the script</br>
`$#` number of positional parameters</br>
`$*` lists all positional parameters (single string when in double quotes)</br>
`$@` same as $* (list of strings when in double quotes)</br>
`$1 - $10` reference individual positional parameters</br>

<u>Variables</u></br>
Creation: `varname=value` or `read varname`</br>
Access: `$varname`</br>
Set: `varname=value`</br>

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

<u>Logical Operators</u></br>
`-a` AND</br>
`-o` OR</br>
`-ge` greater than or equal to</br>
`-le` less than or equal to</br>

<u>The Read Command</u></br>
`read varname` reads a line from stdin to the variable</br>
`read var1 var2` read a line from stdin to the whitespace and puts the first word in var1 and the second in var2</br>
`read` reads a line from stdin and puts it in \$REPLY</br>
`read varname` puts the stdin input in varname</br>
`read -p string` prints a string</br>
`read -r` allows the input to contain a backslash</br>

<u>String Testing</u></br>
`[ string1 = string2 ]` equality check</br>
`[ string1 != string2 ]` inequality check</br>
`[ string]` check for null</br>
`[ -z string ]` check for zero length</br>
`[ -n string ]` check for non-zero length</br>

<u>File Testing Operators</u></br>
*with path after operator*</br>
`-d` directory existence</br>
`-e` path existence</br>
`-f` regular file existence (not a directory)</br>
`-o` file exists and is owned by current user</br>
`-r`, `-w`, `-x` file is read/write/executable</br>
`-s` file is nonzero size</br>

<u>File Comparisons</u></br>
*returns true if*</br>
`[ file1 -nt file2 ]` file1 is newer than file2</br>
`[ file1 -ot file2 ]` file1 is older than file2</br>
`[ file1 -ef file2 ]` files have the same device and inode numbers (hard link)</br>

<u>Exit Status</u></br>
\- every commands return value (all have one) can be accessed with `$?`</br>
`0` means success and anything else is an error code</br>
`exit` terminates the script: mainly used to exit is some condition is true</br>
`exit $?` will return script error status</br>

<u>Notes</u></br>
`-x` debug--prints out commands as they run</br>
\- use double parenthesis to do math operations</br>

<u>Arrays</u></br>
`array_name=( "one" "two" "three" )` to initialize</br>
`${ array_name[i] }` to access</br>
`$array_name` will just retrieve the first value</br>

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