# Basic File System #

### Commands to Know ##
**General Usage**  
`{sh}ls -al dir` list dir contents  
`{sh}pwd` print working directory  
`{sh}cd dir` change directory  
`{sh}rm -rf` remove (recursive, force)  
`{sh}cp file destpath` copy/paste file  
`{sh}mv file destpath` cut/paste file (can be used to rename)  
`{sh}whoami` returns $USER  
`{sh}chmod user+rwx file` add permissions (user and permissions optional) 

**File Commands**  
`{sh}file filename` shows info about file  
`{sh}mkdir dirname` make new directory  
`{sh}touch filename` make new file  
`{sh}vi filename` open text editor  
`{sh}cat file` print contents of file  
`{sh}cat > file` type input from console to file  
`{sh}echo` print  
`{sh}echo "string" > file` write to file (overwrite)  
`{sh}echo "string" >> file` write to file (append)

**SSH Commands**  
`{sh}ssh -p port user@ip.address` secure shell with specified port number (optional)  
`{sh}scp filename user@ip.address:filepath` secure copy  
`{sh}exit` to log out of shell

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

