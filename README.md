# OpenGL Tutorial

Learning OpenGL 3.3 from [OpenGL-Tutorial website](https://learnopengl.com/Getting-started)

## Build

```
mkdir build
cmake -S . -B build --log-level=VERBOSE
make -C build
```


## Dependencies

- `cmake`
- `glfw3`: tag `3.3.8`, fetched by cmake
- `glad`: gl3.3, core profile, with loader
  - could be generated with:

  ```
  glad --profile="core" --api="gl=3.3" --generator="c" --spec="gl" --extensions=""
  ```


## Notes

### A problem with glfw

Apparently glfw `3.4` (current master branch (2023 Dec)) does not work in my machine.
It gives the following errors:

```
GLFW Error (65542): GLX: No GLXFBConfigs returned
GLFW Error (65545): GLX: Failed to find a suitable GLXFBConfig
```

Switching to `3.3.8` solved the problem for me...

### OpenGL-4-man-doc on debian

Grab a download link from one of the mirrors in [this
link](https://packages.debian.org/sid/all/opengl-4-man-doc/download)

download the deb file and install it with dpkg

```
sudo dpkg -i opengl-4-man-doc<...>.deb
```
