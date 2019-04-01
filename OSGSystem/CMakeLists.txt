# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

set(TARGET_NAME OSGSystem)

# sources
# ==============================================================================
file(GLOB SOURCE_FILES *.cpp LexGenerated/*.cpp LexGenerated/*.cc)
file(GLOB HEADER_FILES *.h *.inl LexGenerated/*.h)

# build
# ==============================================================================
add_library(${TARGET_NAME} SHARED ${SOURCE_FILES} ${HEADER_FILES})
set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "D")

if (WIN32)
    add_definitions(-DOSG_COMPILESYSTEMLIB )
    target_link_libraries(${TARGET_NAME} OSGBase opengl32 glu32)
else()
    target_link_libraries(${TARGET_NAME} OSGBase)
endif()

source_group("headers" FILES ${HEADER_FILES})
source_group("sources" FILES ${SOURCE_FILES})

# install
# ==============================================================================
install(
    TARGETS ${TARGET_NAME}
    RUNTIME DESTINATION "bin"
    ARCHIVE DESTINATION "lib"
    LIBRARY DESTINATION "lib"
)

install(
    FILES
        ${HEADER_FILES}
    DESTINATION
        "include/OpenSG"
)
