# Docker syntax

## Format 
```
# Comment
INSTRUCTION arguments
```

# Parser directive
- These are optional and dont add layers to the build 
- Should be defined before any builder instruction has been processed, or else the BuildKit will treat it as a comment
- Lower case by convention

```
# directive=value
```

- Use syntax parser directive to pull the latest stabe version of the Dockerfile syntax before the build
```
# syntax=docker/dockerfile:1
```

- The default escape character is '\\' you can overwrite it like this 
```
# escape=`
```
# ENV
```
ENV abc=hello
ENV abc=bye def=$abc
ENV ghi=$abc
```

- The value of `def` becomes `hello`
- The value of `ghi` becomes `bye`

## dockerignore file
- You can use .dockerignore fiel to exclude files and directories from the build context.

## Shell and exec form
- The RUN, CMD, and ENTRYPOINT instructions all have two possible forms:

- INSTRUCTION ["executable","param1","param2"] (exec form)
- INSTRUCTION command param1 param2 (shell form)

## SHELL 
- You can change the default shell using the `SHELL` command
```
SHELL ["/bin/bash", "-c"]
```

## FROM
 - The `FROM` instruction initializes a new build stage and sets the base image.

## ARG
- An ARG declared before a FROM is outside of a build stage, so it can't be used in any instruction after a FROM. To use the default value of an ARG declared before the first FROM use an ARG instruction without a value inside of a build stage

## RUN
- The RUN instruction will execute any commands to create a new layer on top of the current image.
```
# Shell form:
RUN [OPTIONS] <command> ...
# Exec form:
RUN [OPTIONS] [ "<command>", ... ]
```

- The shell form is most commonly used, and lets you break up longer instructions into multiple lines, either using newline escapes, or with heredocs:
```
RUN <<EOF
apt-get update
apt-get install -y curl
EOF
```

## CMD
- The CMD instruction sets the command to be executed when running a container from an image.
```
CMD ["executable","param1","param2"]  # (exec form)
CMD ["param1","param2"]               #(exec form, as default parameters to ENTRYPOINT)
CMD command param1 param2             # (shell form)
```

- There can only be one CMD instruction in a Dockerfile. If you list more than one CMD, only the last one takes effect.
- If you would like your container to run the same executable every time, then you should consider using `ENTRYPOINT` in combination with `CMD`

## ENTRYPOINT
- An `ENTRYPOINT` allows you to configure a container that will run as an executable.

- The exec form, which is the preferred form:
```
ENTRYPOINT ["executable", "param1", "param2"]
```
- The shell form:
```
ENTRYPOINT command param1 param2
```

## EXPOSE
- The `EXPOSE` instruction informs Docker that the container listens on the specified network ports at runtime
```
EXPOSE <port> [<port>/<protocol>...]

EXPOSE 80/tcp
EXPOSE 80/udp
```

## ADD
- The ADD instruction copies new files or directories from <src> and adds them to the filesystem of the image at the path <dest>. Files and directories can be copied from the build context, a remote URL, or a Git repository.
```
ADD [OPTIONS] <src> ... <dest>
ADD [OPTIONS] ["<src>", ... "<dest>"]


# Examples
ADD file1.txt file2.txt /usr/src/things/

ADD https://example.com/archive.zip /usr/src/things/
ADD git@github.com:user/repo.git /usr/src/things/
```

## COPY
- The COPY instruction copies new files or directories from <src> and adds them to the filesystem of the image at the path <dest>. Files and directories can be copied from the build context, build stage, named context, or an image.

The ADD and COPY instructions are functionally similar, but serve slightly different purposes.
