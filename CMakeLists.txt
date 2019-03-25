# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

project(OpenSG CXX)
cmake_minimum_required(VERSION 3.12)

# use cmake 3.12's <PACKAGE>_ROOT variabled for searching
cmake_policy(SET CMP0074 NEW)

list(APPEND CMAKE_MODULE_PATH
    "$ENV{CMAKE_FIND_SCRIPTS}"
)

find_package(GLUT REQUIRED)
find_package(TIFF REQUIRED)
find_package(PNG REQUIRED)
find_package(JPEG REQUIRED)
find_package(ZLIB REQUIRED)
find_package(Freetype REQUIRED)

if (WIN32)
    add_definitions("/W0 /MP /bigobj -DOSG_BUILD_DLL -D_OSG_HAVE_CONFIGURED_H_ -D_CRT_SECURE_NO_WARNINGS")
else()
    add_definitions("-s -Ofast -Wno-deprecated -Wno-write-strings -Wno-narrowing -DFONTCONFIG_LIB")
endif()

add_definitions("-DOSG_WITH_GLUT -DOSG_WITH_PNG -DOSG_WITH_JPG -DOSG_WITH_TIF -DFT2_LIB")

include_directories(
    "OSGBase"
    "OSGSystem"
    "OSGWindowGLUT"
    "OSGSystem/LexGenerated"
    ${GLUT_INCLUDE_DIR}
    ${JPEG_INCLUDE_DIR}
    ${PNG_INCLUDE_DIR}
    ${TIFF_INCLUDE_DIR}
    ${ZLIB_INCLUDE_DIR}
    ${FREETYPE_INCLUDE_DIRS}
)

add_subdirectory(OSGBase)
add_subdirectory(OSGSystem)
add_subdirectory(OSGWindowGLUT)
add_subdirectory(Test)
