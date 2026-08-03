# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

# lib
# ==============================================================================
add_library(OSGWindowGLUT SHARED)
add_library(OpenSG::WindowGLUT ALIAS OSGWindowGLUT)

set_target_properties(OSGWindowGLUT
    PROPERTIES
        EXPORT_NAME WindowGLUT
)

# sources
# ==============================================================================
file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.h *.inl)

target_sources(OSGWindowGLUT
    PRIVATE
        ${SOURCE_FILES}
    PUBLIC
        FILE_SET HEADERS
        FILES ${HEADER_FILES}
)

# build
# ==============================================================================
target_compile_definitions(OSGWindowGLUT
    PRIVATE
        $<$<PLATFORM_ID:Windows>:OSG_COMPILEWINDOWGLUTLIB>
    PUBLIC
        OSG_WITH_GLUT
        $<$<PLATFORM_ID:Windows>:OSG_BUILD_DLL>
)

target_link_libraries(OSGWindowGLUT
    PUBLIC
        OSGSystem
        OSGBase
        GLUT::GLUT
        OpenGL::GL
        $<$<PLATFORM_ID:Linux>:OpenGL::GLU>
)

target_include_directories(OSGWindowGLUT
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/OpenSG>
)

# install
# ==============================================================================
install(
    TARGETS OSGWindowGLUT
    EXPORT  OpenSGTargets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FILE_SET HEADERS DESTINATION "include/OpenSG"
)
