# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

set(TARGET_NAME OSGBase)

# sources
# ==============================================================================
file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.h *.inl)

# build
# ==============================================================================
add_library(${TARGET_NAME} SHARED ${SOURCE_FILES} ${SOURCE_FILES})
set_target_properties(${TARGET_NAME} PROPERTIES DEBUG_POSTFIX "D")

if (${CMAKE_VERSION} GREATER_EQUAL 3.16)
	target_precompile_headers(${TARGET_NAME} PRIVATE precompiled.pch)
endif()

if (WIN32)
    add_definitions(-DOSG_COMPILEBASELIB )
endif()

if (WIN32)
	target_link_libraries(${TARGET_NAME} winmm wsock32)
else()
	target_link_libraries(${TARGET_NAME} pthread dl)
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
