#!/usr/bin/glow

<!-- <p align="center"> $\mathbfup{Rsync}$ $\mathbfup{Local}$ $\mathbfup{Machine}$</p> -->

<h1 align="center">Rsync Local Machine </h1>

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

<!-- <p align="center">$\mathbfup{Laptop}$ $\mathbfup{to}$ $\mathbfup{Server}$</p> -->

<h1 align="center">Laptop to server</h1>

## Transfer files from your laptop to the server

`rsync -ahP <src/> user@ipaddr:</dest>`

## Compress the data using -z

`rsync -ahPz <src/> user@ipaddr:</dest>`

<!-- <p align="center">$\mathbfup{Server}$ $\mathbfup{to}$ $\mathbfup{Laptop}$</p> -->

<h1 align="center">Server to Laptop</h1> 

`rsync -ahP user@ipaddr:</src> <dest/>`

## SSH port changed on the destination machine

`rsync -ahPe 'ssh -p 22' user@ipaddr:</src> <dest/>`

#uid 20221115141350
