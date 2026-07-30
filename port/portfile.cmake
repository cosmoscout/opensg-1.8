vcpkg_from_gitlab(
    GITLAB_URL https://gitlab.com/OpenSG/OpenSG
    REF v1.8.0
    SHA512 0
    HEAD_REF main
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS
        -DOPENSG_BUILD_TESTS=OFF
        -DOPENSG_BUILD_WINDOW=$<$<IN_LIST:window,FEATURES>:ON>
)

vcpkg_cmake_install()
vcpkg_copy_pdbs()

file(INSTALL "${SOURCE_PATH}/COPYING" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}" RENAME "copyright")
file(INSTALL "${CURRENT_PORT_DIR}/usage" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}")