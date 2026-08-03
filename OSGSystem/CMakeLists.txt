# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

# lib
# ==============================================================================
add_library(OSGSystem SHARED ${SOURCE_FILES} ${HEADER_FILES})
add_library(OpenSG::System ALIAS OSGSystem)

set_target_properties(OSGSystem
    PROPERTIES
        DEBUG_POSTFIX "D"
        EXPORT_NAME   System
)

# sources
# ==============================================================================
file(GLOB SOURCE_FILES *.cpp LexGenerated/*.cpp LexGenerated/*.cc)
file(GLOB HEADER_FILES *.h *.inl LexGenerated/*.h)

target_sources(OSGSystem
    PRIVATE
        ${SOURCE_FILES}
    PUBLIC
        FILE_SET HEADERS
        FILES ${HEADER_FILES}
)

# build
# ==============================================================================
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
    target_precompile_headers(OSGSystem PRIVATE precompiled.pch)
endif()

target_compile_definitions(OSGSystem
    PRIVATE
        $<$<PLATFORM_ID:Windows>:OSG_COMPILESYSTEMLIB>
    PUBLIC
        $<$<PLATFORM_ID:Windows>:OSG_BUILD_DLL>
        $<$<BOOL:${OPENSG_INFINITE_REVERSE_PROJECTION}>:OSG_INFINITE_REVERSE_PROJECTION>
)

target_link_libraries(OSGSystem
    PUBLIC
        OSGBase
        $<$<PLATFORM_ID:Windows>:opengl32 glu32>
)

target_include_directories(OSGSystem
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/OpenSG>
)

# install
# ==============================================================================
install(
    TARGETS OSGSystem
    EXPORT  OpenSGTargets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    FILE_SET HEADERS DESTINATION "include/OpenSG"
)
