vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO cosmoscout/opensg-1.8
    REF 0
    SHA512 0
    HEAD_REF main
)

set(OPENSG_WINDOW_FEATURE Off)
if ("window" IN_LIST FEATURES)
    set(OPENSG_WINDOW_FEATURE On)
endif ()

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS
        -DOPENSG_BUILD_TESTS=Off
        -DOPENSG_BUILD_WINDOW=${OPENSG_WINDOW_FEATURE}
        -DOPENSG_USE_PRECOMPILED_HEADERS=On
        -DOPENSG_INFINITE_REVERSE_PROJECTION=On
        -DCMAKE_UNITY_BUILD=On
)

vcpkg_cmake_install()
vcpkg_copy_pdbs()
vcpkg_install_copyright(FILE_LIST "${SOURCE_PATH}/LICENSE")

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include")
file(INSTALL "${CMAKE_CURRENT_LIST_DIR}/usage" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}")