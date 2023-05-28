<h1 align=center>$Navigation$</h1>

- cd – Change directory.
- ls – List directory contents.  
- pwd – Print name of current working directory.     

## cd - Change directory

``` 
$ cd Desktop
```
| Shortcut|Result|
| :---- |  :-----  |
|<pre>cd</pre>|Changes the working directory to your home directory.|
|<pre>cd ..</pre>|Changes the working directory to your parent directory.|
|<pre>cd -</pre>|Changes the working directory to the previous working directory.|
|<pre>cd ~user_name</pre>|Changes the working directory to the home directory of user_name.|

## ls - List directory

```
$ ls
Desktop  Documents  Music  Pictures  Public  Templates  Videos
```
- Absolute Pathnames - An absolute pathname begins with the root director
- Relative Pathnames - A relative pathname starts from the working directory. 

| Option |   Long Option  | Meaning |
| :----: |   :--------    | :------ |
|<pre>-a</pre>|<pre>--all</pre>|List all files, even those with names that begin with a period, which are normally not listed (that is, hidden).|
|<pre>-A</pre>|<pre>--almost-all</pre>|Lists all directories except . (current directory) and .. (parent directory)|
|<pre>-d</pre>|<pre>--directory</pre>|Use this option in conjunction with the -l option to see details about the directory rather than its contents.|
|<pre>-F</pre>|<pre>--classify</pre>|This option will append an indicator character to the end of each listed name. For example, a forward slash (/) if the name is a directory.|
|<pre>-h</pre>|<pre>--human-readable</pre>|In long format listings, display file sizes in human readable format rather than in bytes.|
|<pre>-l</pre>|  |Display results in long format.|
|<pre>-r</pre>|<pre>--reverse</pre>|Display the results in reverse order. Normally, ls displays its results in ascending alphabetical order.|
|<pre>-S</pre>|  |Sort results by file size.|
|<pre>-t</pre>|  |Sort by modification time.|

## ls Example

```
$ ls -l
-rw-r--r-- 1 root root  159744 2017-04-03 11:05 oo-derivatives.doc
-rw-r--r-- 1 root root   27837 2017-04-03 11:05 oo-maxwell.odt
-rw-r--r-- 1 root root   98816 2017-04-03 11:05 oo-trig.xls
-rw-r--r-- 1 root root  453764 2017-04-03 11:05 oo-welcome.odt
```

| Field | Meaning |
| :---- | :---- |
|<pre>-rw-r--r--</pre>| Access rights to the file. The first character indicates the type of file. Among the different types, a leading dash means a regular file, while a “d” indicates a directory. The next three characters are the access rights for the file's owner, the next three are for members of the file's group, and the final three are for everyone else.|
|<pre>1</pre>| File's number of hard links. |
|<pre>root</pre>|The username of the file's owner.|
|<pre>root</pre>|The name of the group that owns the file.|
|<pre>159744</pre>|Size of the file in bytes.|
|<pre>2017-04-03 11:05</pre>| Date and time of the file's last modification.|
|<pre>oo-derivatives.doc</pre>| Name of the file |

## pwd - print working directory

Prints the working directory
```
$ pwd
/home/me
```

#uid 20221112234110
