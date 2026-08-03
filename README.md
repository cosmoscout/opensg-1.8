# Beware!

This is a stripped down version of OpenSG 1.8. The original source code an be found [here](https://sourceforge.net/projects/opensg/files/OldReleases/1.8.0/).

This version contains all relevant source files to build an OpenSG which is compatible with CosmoScout VR. Instead of autotools, this version uses CMake to generate build scripts. However, it is not guaranteed, whether this version works flawlessly, yet it is much easier to compile it recent versions of msvc and gcc. 

Several source files have been adapted to be compatible with these new compilers. This may lead to bugs. Here are the most notable changes:
* [OSGParSpaceTrimmer.cpp](OSGSystem/OSGParSpaceTrimmer.cpp#L3262): Returns now NULL instead of false.
* [OSGAction.h](OSGSystem/OSGAction.h#L365): Two new traverse methods have been added which do not take the functors per value. 

# Building OpenSG

## Prerequisites

1. Initialize git submodules (includes vcpkg):

```bash
git submodule update --init --recursive
```

2. Bootstrap vcpkg (if using the bundled version):

```bash
cd tools/vcpkg
./bootstrap-vcpkg.sh        # Linux/macOS
.\bootstrap-vcpkg.bat       # Windows
cd ../..
```

Alternatively, provide your own vcpkg installation and adjust the `toolchainFile` path in `CMakePresets.json`.

## Using CMake Presets

OpenSG uses CMake presets for easy configuration and building. The minimum required CMake version is 3.28.

```bash
# Structure of the available presets
cmake --workflow <platform>-<generator>-<release/debug>

# List all presets
cmake --workflow --list-presets

# Examples:
cmake --workflow windows-ninja-debug
cmake --workflow windows-vs-release
cmake --workflow linux-ninja-debug
cmake --workflow linux-make-release
```

## Manual CMake Configuration

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build . --target install
```

# Using OpenSG in Another Project with vcpkg

OpenSG is available as a vcpkg port. To use it in your project:

1. Install OpenSG via vcpkg:

```bash
vcpkg install opensg:x64-windows
vcpkg install opensg:x64-linux
```

2. In your CMake project, use find_package:

```cmake
find_package(opensg CONFIG REQUIRED)

target_link_libraries(your_target PRIVATE OpenSG::Base OpenSG::System)
```

## Features

- `window`: Enables windowing system support with freeglut
