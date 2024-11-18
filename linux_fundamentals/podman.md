#!/usr/bin/glow

# Podman commands

## podman init for new installation

`podman machine init` 

## podman start, stop the machine

`podman machine start`

`podman machine stop`

## If the images exists then rum it else, pull images from the cloud and run it. --rm is used to remove the container after exit

`podman run -it --hostname <name> --rm <image name>`

## List all the images existing from the cloud

`podman images`

## list all the running containers (running or exited)

`podman ps -a`

## Remove unwanted containers

`podman rm`
