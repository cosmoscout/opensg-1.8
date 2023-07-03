#!/bin/bash

# ------------------------------------------------------------------------------------------------ #
#                                  This file is part of OpenSG 1.8                                 #
# ------------------------------------------------------------------------------------------------ #

# The modules are assumed to be in the parent folder.
SRC_DIR="$( cd "$( dirname "$0" )" && pwd )"

# Execute clang format for all *.cpp, *.hpp *.h and *.inl files.
find "$SRC_DIR/../OSGBase" "$SRC_DIR/../OSGSystem" "$SRC_DIR/../OSGWindowsGLUT" "$SRC_DIR/../Test" -type f \
     \( -name '*.cpp' -o -name '*.hpp' -o -name '*.h' -o -name '*.inl' \) -exec sh -c '
  for file do
    echo "Formatting $file..."
    clang-format -i "$file"
  done
' sh {} +
