# Dockerfile for building taler binaries.

Now, you can build your own taler files on all systems with docker and do it easy without installing depends on your system.

## How:

### Build docker image

```
sudo docker build .
```

### Run docker container

Builder will return HASH of image
Example:
Successfully built 9bbff825d50f

```
sudo docker run -it -v ~/path/to/taler/folder:/taler 9bbff825d50f
```

If your system uses SELINUX you may use --privileged=true key

```
sudo docker run --privileged=true -it -v ~/development/taler:/taler 9bbff825d50f
```

See taler-qt file in used taler folder and talerd file in src subfolder.