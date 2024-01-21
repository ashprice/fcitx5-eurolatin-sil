add_library(eurolatin-sil SHARED eurolatin-sil.cpp)
target_link_libraries(eurolatin-sil PRIVATE Fcitx5::Core)
set_target_properties(eurolatin-sil PROPERTIES PREFIX "")
install(TARGETS eurolatin-sil DESTINATION "${FCITX_INSTALL_LIBDIR}/fcitx5")

# Addon config file
# We need an additional layer of conversion because we want PROJECT_VERSION in it.
configure_file(eurolatin-sil-addon.conf.in eurolatin-sil-addon.conf)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/eurolatin-sil-addon.conf" RENAME eurolatin-sil.conf DESTINATION "${FCITX_INSTALL_PKGDATADIR}/addon")

# Input method registration file
install(FILES "eurolatin-sil.conf" DESTINATION "${FCITX_INSTALL_PKGDATADIR}/inputmethod")

