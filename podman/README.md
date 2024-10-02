# Podman
1. Create the `~/dotfiles/.config/containers/registries.conf` file
2. Dont forget to symlink or stow it

```
unqualified-search-registries = ['docker.io', 'ghrc.io', 'quay.io']
```

# Podman basic commands

```
podman search debain                                              # Search a podman image from docker.io, ghrc.io and quay.io
podman pull docker.io/library/debian:bookworm                     # This will pull the image to local machine
podman run -it --name debian docker.io/library/debian:latest      # This will run bash in the container in interactive mode and --rm will delete the container after exiting 
podman start debian                                               # Starts the container so you can connect to it using exec
podman exec --interactive --tty 81444a9c7044 /bin/bash            # Connect to an existing up container
podman stop debian                                                # Stop a container
```
