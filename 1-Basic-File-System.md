# Basic File System #

### Commands to Know ##
**General Usage**</br>
`ls -al dir` list dir contents</br>
`pwd` print working directory </br>
`cd dir` change directory </br>
`rm -rf` remove (recursive, force)</br>
`cp file destpath` copy/paste file</br>
`mv file destpath` cut/paste file (can be used to rename)</br>
`whoami` returns $USER</br>
`chmod user+rwx file` add permissions (user and permissions optional) </br>
</br>
**File Commands**</br>
`mkdir dirname` make new directory</br>
`touch filename` make new file</br>
`vi filename` open text editor</br>
`cat file` print contents of file</br>
`cat > file` type input from console to file</br>
`echo` print</br>
`echo "string" > file` write to file (overwrite)</br>
`echo "string" >> file` write to file (append)</br>
</br>
**SSH Commands**</br>
`ssh -p portnum user@ip.address` secure shell with specified port number (optional)</br>
`scp filename user@ip.address:filepath` secure copy</br>
`exit` to log out of shell</br>

**ENV Vars**
`$PATH` stores directory shortcuts</br>
`$HOME` establishes home dir</br>
`$USER` username </br>
`$HOSTNAME` device label for internal network use</br>
`$PS1` prompt information</br>

**Vi Commands**</br>
`i` to "insert"</br>
`esc` to go back to command mode</br>
`:wq` (write quit) to save and exit</br>


