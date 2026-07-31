# ---------------------------------------------------------------------------- #
#                                                                              #
#  Copyright: (c) 2010 - 2016 DLR (German Aerospace Center)                    #
#                                                                              #
# ---------------------------------------------------------------------------- #

# lib
# ==============================================================================
add_library(OSGBase SHARED)
add_library(OpenSG::Base ALIAS OSGBase)

set_target_properties(OSGBase
		PROPERTIES
		DEBUG_POSTFIX "D"
		EXPORT_NAME   Base
)

# sources
# ==============================================================================
file(GLOB SOURCE_FILES *.cpp)
file(GLOB HEADER_FILES *.h *.inl)

target_sources(OSGBase
	PRIVATE
		${SOURCE_FILES}
	PUBLIC
		FILE_SET HEADERS
		FILES ${HEADER_FILES}
)

# build
# ==============================================================================

if (OPENSG_USE_PRECOMPILED_HEADERS)
	target_precompile_headers(OSGBase PRIVATE precompiled.pch)
endif()

target_compile_definitions(OSGBase
	PRIVATE
		$<$<PLATFORM_ID:Windows>:OSG_COMPILEBASELIB>
)

target_link_libraries(OSGBase
	PUBLIC
		$<$<PLATFORM_ID:Windows>:winmm wsock32>
		$<$<PLATFORM_ID:Linux>:pthread dl>
)

target_include_directories(OSGBase
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include/OpenSG>
        $<INSTALL_INTERFACE:OpenSG>
)

# install
# ==============================================================================
install(
    TARGETS OSGBase
	EXPORT  OpenSGTargets
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	FILE_SET HEADERS DESTINATION "include/OpenSG"
)