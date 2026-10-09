# Only mangle package name if binary package
if ("${CPACK_INSTALL_CMAKE_PROJECT}" STRGREATER "")
   if ()
      # FIXME We have to find way to evaluate CMAKE_CFG_INTDIR at cpack time
      # or generate this current file at build time
      # message("CMAKE_CFG_INTDIR=${CMAKE_CFG_INTDIR}")
      set(PACKAGE_TYPE "NotSet")
      include(/home/simbricks/COSSIM/cCERTI/PackageType.cmake OPTIONAL)
      set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-${PACKAGE_TYPE}-${CPACK_SYSTEM_NAME}")
   else()
      set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}-Debug-${CPACK_SYSTEM_NAME}")
   endif()

   #Normalize CPACK_PACKAGE_VERSION for picky WiX
   if ("${CPACK_GENERATOR}" STREQUAL "WIX")
       string(REGEX MATCH "([0-9]*).*" CPACK_PACKAGE_VERSION_PATCH_WIX "${CPACK_PACKAGE_VERSION_PATCH}")
	   set(CPACK_PACKAGE_VERSION_PATCH_WIX ${CMAKE_MATCH_1})
	   set(CPACK_PACKAGE_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH_WIX}")
   endif()

   if("${CPACK_GENERATOR}" STREQUAL "PackageMaker")
      set(CPACK_PACKAGE_DEFAULT_LOCATION "/usr/local")
      set(CPACK_OSX_PACKAGE_VERSION "10.4")
   endif()
endif()
