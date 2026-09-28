# Basic File System #

### Commands to Know ##
**General Usage**  
`ls -al dir` list dir contents  
`pwd` print working directory  
`cd dir` change directory  
`rm -rf` remove (recursive, force)  
`cp file destpath` copy/paste file  
`mv file destpath` cut/paste file (can be used to rename)  
`whoami` returns $USER  
`chmod user+rwx file` add permissions (user and permissions optional) 

**File Commands**  
`file filename` shows info about file  
`mkdir dirname` make new directory  
`touch filename` make new file  
`vi filename` open text editor  
`cat file` print contents of file  
`cat > file` type input from console to file  
`echo` print  
`echo "string" > file` write to file (overwrite)  
`echo "string" >> file` write to file (append)

**SSH Commands**  
`ssh -p port user@ip.address` secure shell with specified port number (optional)  
`scp filename user@ip.address:filepath` secure copy  
`exit` to log out of shell

<u>Piping</u>  
\- passes the output from one linux command as the input for the next  
ex: `ls | grep ".txt"`

<u>Redirection</u>  
\- passes the output of a command into a file  
\- `>` to overwrite and `>>` to append

**ENV Vars**  
`$PATH` stores directory shortcuts  
`$HOME` establishes home dir  
`$USER` username  
`$HOSTNAME` device label for internal network use  
`$PS1` prompt information

**Vi Commands**  
`i` to "insert"  
`esc` to go back to command mode  
`:wq` (write quit) to save and exit

**Permission Representation**  
\[link or directory\]\[owner\]\[group\]\[users\]  
ex: lrwxr----- (symbolic link, owner has rwx, group has r only)  
ex: d-wr--r--r (directory, only owner can write)  
\- can also use three binary bits to represent +rwx (1 for yes, 0 for no)  
\- these bits can also be written in decimal

