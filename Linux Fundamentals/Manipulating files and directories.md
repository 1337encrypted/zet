#!/usr/bin/glow

<h1 align=center>Manipulating Files and Directories</h1>

- cp - copies files and directories
- ln - Creates Hard links and Symbolic links
- mv - moves or renames files and directories
- mkdir - Creates a directory
- rm - removes files and directories
- rmdir - Removes a empty directory

## cp – Copy Files and Directories

The cp command copies files or directories. It can be used two different ways. The following:   

`$ cp item1 item2`   

copies the single file or directory item1 to the file or directory item2 and the following:   

`$ cp item... directory`   

copies multiple items (either files or directories) into a directory.   

| Option |   Long Option  | Meaning |
| :----: |   :--------    | :------ |
|<pre>-a</pre>| <pre>--archive</pre> | Copy files and directories and all their attributes, including ownerships and permissions. Normally copy takes on default attributes of the user performing the copy. |
|<pre>-i</pre>| <pre>--interactive</pre> | Before overwriting an existing file prompt the user for confirmation. If this option is not specified cp will silently overwrite the files. |
|<pre>-r</pre>| <pre>--recursive</pre> | Recursively copy directories and and their contents. This option (or the -a option) is required when copying directories. |
|<pre>-u</pre>| <pre>--update</pre> | When copying files from one directory to another, only copy files that either don't exist or are newer than the existing corresponding files, in the destination directory. This is used while copying large number of files as it skips files that are already been copied. |
|<pre>-v</pre>| <pre>--verbose</pre> | Display informative message while copy is being performed. |

## cp Examples

| Command | Result |
| :-- | :-- |
|<pre>cp file1 file2</pre>| Copy file1 to file2, **if file2 exists it is overwritten with the contents of file1.** if it doesn't exist then its created. |
|<pre>cp -i file1 file2</pre>| If file 2 exists the user is prompted before its overwritten. |
|<pre>cp file1 file2 dir1</pre>| Copy file1 and file2 into directory dir1. The directory dir1 must already exist.|
|<pre>cp dir1/* dir2</pre>| Copy all the contents of directory dir1 in directory dir2, only if directory dir2 exists. |
|<pre>cp -r dir1 dir2</pre>| Copy all the contents of dir1 recursively in dir2. If dir2 doesn't exist then create it and copy the files |

## ln – Create Links

The ln command is used to create either hard or symbolic links. It is used in one of two
ways. The following creates a hard link:

`ln file link`

The following creates a symbolic link:

`ln -s item link`

### Hard Links

- Hard links are the original Unix way of creating links, compared to symbolic links, which are more modern. 
- Hard links have two important limitations:
  1. A hard link cannot reference a file outside its own file system. This means a link cannot reference a file that is not on the same disk partition as the link itself.
  2. A hard link may not reference a directory.
- A hard link is indistinguishable from the file itself. Unlike a symbolic link, when we list a directory containing a hard link we will see no special indication of the link. 
- When a hard link is deleted, the link is removed but the contents of the file itself continue to exist (that is, its space is not deallocated) until all links to the file are deleted.

### Symbolic Links

- Symbolic links were created to overcome the limitations of hard links. Symbolic links work by creating a special type of file that contains a text pointer to the referenced file or directory.
- If we write something to the symbolic link, the refer- enced file is written to. 
- However when we delete a symbolic link, only the link is deleted, not the file itself. If the file is deleted before the symbolic link, the link will continue to exist but will point to nothing.
- Symbolic links were created to overcome the two disadvantages of hard links.
1. Hard links cannot span physical devices.
2. Hard links cannot reference directories, only files.

## mv – Move and Rename Files   

The mv command performs both file moving and file renaming   

```$ mv item1 item2```

to move or rename the file or directory item1 to item2 or:   

```$ mv item... directory```   

to move one or more items from one directory to another.

## mv Options

| Option |   Long Option  | Meaning |
| :----: |   :--------    | :------ |
|<pre>-i</pre>|<pre>--interactive</pre>| Before overwriting an existing file, prompt the user for confirmation else mv will silently overwrite files
|<pre>-u</pre>|<pre>--update</pre>|When moving files from one directory to another, only move files that either don't exist, or are newer than the existing corresponding files in the destination directory.|
|<pre>-v</pre>|<pre>--verbose</pre>| Displays imformative message as the move is performed|

| Command | Result |
| :-- | :-- |
|<pre>mv file1 file2</pre>| Move file1 to file2. If file2 exists, it is overwritten with the contents of file1. If file2 does not exist, it is created. In either case, file1 ceases to exist.
|<pre>mv -i file1 file2</pre>| Same as the previous command, except that if file2 exists, the user is prompted before it is overwritten.|
|<pre>mv file1 file2 dir1</pre>| Move file1 and file2 into directory dir1. The dierctory dir1 must already exist.|
|<pre>mv dir1 dir2</pre>|If directory dir2 does not exist, create directory dir2 and move the contents of directory dir1 into dir2 and delete directory dir1. If directory dir2 does exist, move directory dir1 (and its contents) into directory dir2.|

## mkdir – Create Directories

The mkdir command is used to create directories. It works like this:    

`$ mkdir dir1`  

would create a single directory named dir1, while the following:   

`$ mkdir dir1 dir2 dir3`    

would create three directories named dir1, dir2, and dir3.   

## rm – Remove Files and Directories

The rm command is used to remove (delete) files and directories
```$ rm item...```

## rm Options

| Option |   Long Option  | Meaning |
| :----: |   :--------    | :------ |
|<pre>-i</pre>|<pre>--interactive</pre>|Before deleting an existing file, prompt the user for confirmation. If this option is not specified, rm will silently delete files.|
|<pre>-r</pre>|<pre>--recursive</pre>|Recursively delete directories. This means that if a directory being deleted has subdirectories, delete them too. To delete a directory, this option must be specified.|
|<pre>-f</pre>|<pre>--force</pre>|Ignore nonexistent files and do not prompt. This overrides the --interactive option.|
|<pre>-v</pre>|<pre>--verbose</pre>|Display informative messages as the deletion is performed.|

## rm Examples

| Command | Result |
| :-- | :-- |
|<pre>rm file1</pre>|Delete file1 silently.|
|<pre>rm -i file1</pre>|Same as the previous command, except that the user is prompted for confirmation before the deletion is performed.|
|<pre>rm -r file1 dir1</pre>|Delete file1 and dir1 and its contents.|
|<pre>rm -rf file1 dir1</pre>|Same as the previous command, except that if either file1 or dir1 do not exist, rm will continue silently.|

## rmdir – Create Directories

`$ rmdir dir1`  

- Deletes a empty directory

#uid 20230528084810
