<h1 align="center">$\mathtt{Rsync}$ $\mathtt{Local}$ $\mathtt{Machine}$</h1>

## To copy file Between folders

`rsync <srcfile> <destfile>`
  
## To copy folders recursively
  
`rsync -r <src/> <dest>`

#### Note: `-r` will not copy the time, date, permissions, etc use -a insetad

#### Note: `src` should end with '/' to copy the individual files into the current directory, else the whole directory is copied
  
## Copy folders recursively with progress bar

`rsync -ah --progress <src/> <dest>`

#### `-h` makes the data human readable

## Copy files partially and continue later

`rsync -ah --progress --partial <src/> <dest>`

#### `--partial` lets you continue from where you interrupted the file transfer

## Combine `--proggress` and `--partial` with `-P` option

`rsync -ahP <src/> <dest>`

## Sync the destination repository with the source

`rsync -ahP --delete <src/> <dest>`

#### `--delete` will delete all the unsynced files in the destination reposiory which do not match with the files in the source repository, basically syncing both the repositories

## Remove source files upon copying to the destination

`rsync -ahP --remove-source-files <src/> <dest>`

#### To delete all the empty directories after copy the files in the destination directory use `find src/ -type d -empty -delete`

<h1 align="center">$\mathtt{Rsync}$ $\mathtt{Remote}$ $\mathtt{To}$ $\mathtt{Local}$</h1>

## To copy file Between source of local machine to destination of remote machine

`rsync -ahP <src/> user@ipaddr:</dest>`

## Compress the data using -z

`rsync -ahPz <src/> user@ipaddr:</dest>`

<h1 align="center">$\mathtt{Rsync}$ $\mathtt{Local}$ $\mathtt{To}$ $\mathtt{Remote}$</h1>

## To copy file Between destination of remote machine to source of local machine

`rsync -ahP user@ipaddr:</src> <dest/>`

## SSH port changed on the destination machine

`rsync -ahPe 'ssh -p 22' user@ipaddr:</src> <dest/>`

[^1]: 20221115141350


