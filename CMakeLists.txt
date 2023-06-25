# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2019 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

project(OpenSG CXX)
cmake_minimum_required(VERSION 3.12)

if (${CMAKE_VERSION} GREATER_EQUAL 3.16)
    option(OPENSG_USE_PRECOMPILED_HEADERS "Turn on generation of precompiled headers" OFF)
    set(CMAKE_UNITY_BUILD_BATCH_SIZE 20)
endif()

# use cmake 3.12's <PACKAGE>_ROOT variabled for searching
cmake_policy(SET CMP0074 NEW)

find_package(OpenGL REQUIRED)

if (WIN32)
    add_definitions("/W0 /MP /bigobj -DOSG_BUILD_DLL -D_OSG_HAVE_CONFIGURED_H_ -D_CRT_SECURE_NO_WARNINGS")
else()
    add_definitions("-s -Ofast -Wno-deprecated -Wno-write-strings -Wno-narrowing -Wno-unused-parameter -Wno-undefined-var-template")
endif()

option(OPENSG_INFINITE_REVERSE_PROJECTION "Use a reverse infinite projection instead of the standard OpenGL projection" OFF)
if(OPENSG_INFINITE_REVERSE_PROJECTION)
    add_definitions("-DOSG_INFINITE_REVERSE_PROJECTION")
endif(OPENSG_INFINITE_REVERSE_PROJECTION)



include_directories(
    "OSGBase"
    "OSGSystem"
    "OSGSystem/LexGenerated"
)

add_subdirectory(OSGBase)
add_subdirectory(OSGSystem)

option(OPENSG_BUILD_TESTS "Turn off building of test applications" ON)

if (OPENSG_BUILD_TESTS)
    find_package(GLUT REQUIRED)
    add_definitions("-DOSG_WITH_GLUT")
    include_directories("OSGWindowGLUT")
    add_subdirectory(OSGWindowGLUT)
    add_subdirectory(Test)
endif()
