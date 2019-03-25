# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

set(CMAKE_INSTALL_RPATH
    "${CMAKE_INSTALL_PREFIX}/lib"
)

# sources
# ==============================================================================
file(GLOB TEST_FILES *.cpp)

foreach( TEST_FILE ${TEST_FILES} )
    get_filename_component(TARGET_NAME ${TEST_FILE} NAME_WE)
    add_executable( ${TARGET_NAME} ${TEST_FILE} )
    target_link_libraries(${TARGET_NAME} OSGWindowGLUT)
    install(
        TARGETS ${TARGET_NAME}
        RUNTIME DESTINATION "bin"
    )
endforeach()

