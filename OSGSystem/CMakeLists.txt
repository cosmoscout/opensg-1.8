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

if (CMAKE_UNITY_BUILD)
    file(GLOB LEX_SOURCES LexGenerated/*.cpp LexGenerated/*.cc)

    foreach(FILE IN LISTS LEX_SOURCES)
        set_property(SOURCE ${FILE} PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    endforeach()

    set_property(SOURCE "OSGFontStylePFields.cpp"                PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGDVRIsoShaderNVRegisterCombiners.cpp" PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropIndices.cpp"                  PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropNormals.cpp"                  PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropPLengths.cpp"                 PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropPTypes.cpp"                   PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropPositions.cpp"                PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGGeoPropTexCoords.cpp"                PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGMaterialMergeGraphOp.cpp"            PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
    set_property(SOURCE "OSGWindow.cpp"                          PROPERTY SKIP_UNITY_BUILD_INCLUSION ON)
endif()

if (OPENSG_USE_PRECOMPILED_HEADERS)
    target_precompile_headers(${TARGET_NAME} PRIVATE precompiled.pch)
endif()

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
