# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2019 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

cmake_minimum_required(VERSION 3.28)
project(OpenSG VERSION 1.8 LANGUAGES CXX)

option(OPENSG_USE_PRECOMPILED_HEADERS "Turn on generation of precompiled headers" OFF)
set(CMAKE_UNITY_BUILD_BATCH_SIZE 20)

find_package(OpenGL REQUIRED)

if (WIN32)
    add_definitions("/W0 /MP /bigobj -D_CRT_SECURE_NO_WARNINGS")
else()
    add_definitions("-s -Wno-deprecated -Wno-write-strings -Wno-narrowing -Wno-unused-parameter -Wno-undefined-var-template")
endif()

option(OPENSG_INFINITE_REVERSE_PROJECTION "Use a reverse infinite projection instead of the standard OpenGL projection" OFF)

include_directories(
    "OSGBase"
    "OSGSystem"
    "OSGSystem/LexGenerated"
)

include(GNUInstallDirs)

add_subdirectory(OSGBase)
add_subdirectory(OSGSystem)

option(OPENSG_BUILD_WINDOW "Turn on building the window API"        ON)
option(OPENSG_BUILD_TESTS  "Turn off building on test applications" ON)

if (OPENSG_BUILD_WINDOW)
    find_package(GLUT REQUIRED)
    add_subdirectory(OSGWindowGLUT)
endif()

if (OPENSG_BUILD_TESTS)
    if (OPENSG_BUILD_WINDOW)
        add_subdirectory(Test)
    else()
        message(WARNING "OSGWindow not enabled, but required for building tests. Skipping tests.")
    endif()
endif()

include(CMakePackageConfigHelpers)

configure_package_config_file (
    ${CMAKE_CURRENT_SOURCE_DIR}/cmake/OpenSGConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/cmake/OpenSGConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/OpenSG
)

write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/OpenSGConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMinorVersion
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/cmake/OpenSGConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/OpenSGConfigVersion.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/OpenSG"
)

add_library(OpenSG INTERFACE)
target_link_libraries(OpenSG INTERFACE OpenSG::Base OpenSG::System)
if (OPENSG_BUILD_WINDOW)
    target_link_libraries(OpenSG INTERFACE OpenSG::WindowGLUT)
endif()

install(EXPORT OpenSGTargets
    FILE OpenSGTargets.cmake
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/OpenSG
    NAMESPACE OpenSG::
)