# Podman

1. Create the `~/dotfiles/.config/containers/registries.conf` file
2. Dont forget to symlink or stow it

```
unqualified-search-registries = ['docker.io', 'ghrc.io', 'quay.io']
```

# Podman basic commands

| **Action**                                   | **Command**                                     |
| -------------------------------------------- | ----------------------------------------------- |
| Search for an image                          | `podman search ubuntu`                          |
| Pull Ubuntu image                            | `podman pull ubuntu`                            |
| Run a temporary Ubuntu container             | `podman run -it --rm ubuntu`                    |
| Run a persistent Ubuntu container            | `podman run -it --name ubuntu_container ubuntu` |
| Run with internet (rootless mode)            | `podman run -it --network=slirp4netns ubuntu`   |
| Run with host network                        | `podman run -it --network=host ubuntu`          |
| Attach to a running container                | `podman attach ubuntu_container`                |
| Exit a running container                     | Press `Ctrl + D` or type `exit`                 |
| Stop a running container                     | `podman stop ubuntu_container`                  |
| Restart an existing container                | `podman start -ai ubuntu_container`             |
| List running containers                      | `podman ps`                                     |
| List all containers                          | `podman ps -a`                                  |
| Remove a container                           | `podman rm ubuntu_container`                    |
| Remove all stopped containers                | `podman container prune`                        |
| Remove an image                              | `podman rmi ubuntu`                             |
| Show logs of a container                     | `podman logs ubuntu_container`                  |
| Execute a command inside a running container | `podman exec -it ubuntu_container bash`         |

## Example

1. Start a container from a local image and assigning host network

```
podman run -it --network=host --name ubuntu_container ubuntu
```

2. Restart a container

```
podman start -ai ubuntu_container
```
