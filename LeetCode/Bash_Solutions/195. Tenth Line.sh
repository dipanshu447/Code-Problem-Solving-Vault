sed -n '10p' < file.txt
# Uses 'sed' (stream editor) to print only the 10th line of file.txt.  
# '-n' stops automatic printing of all lines.  
# '10p' tells 'sed' to print only the 10th line.  
# '< file.txt' redirects the file's content as input to 'sed'.  