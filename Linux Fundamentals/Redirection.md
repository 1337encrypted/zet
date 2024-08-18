#!/usr/bin/glow
# Redirection

- cat – Concatenate files
- sort – Sort lines of text
- uniq – Report or omit repeated lines
- grep – Print lines matching a pattern
- wc – Print newline, word, and byte counts for each file
- head – Output the first part of a file
- tail – Output the last part of a file
- tee – Read from standard input and write to standard output and files

## stdin, stdout, stderr

- stdin - 0
- stdout - 1
- stderr - 2

- Redirect stderr to another file
```
ls -l /bin/usr 2> ls-error.txt
```

- Redirecting Standard Output and Standard Error to One File
```
ls -l /bin/usr > ls-output.txt 2>&1
```

    - A newer approach to this is given by
```
ls -l /bin/usr &> ls-output.txt
```

- To silence the output from printing
```
ls -l /bin/usr > /dev/null
```
