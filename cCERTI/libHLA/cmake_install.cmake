# Install script for directory: /home/simbricks/COSSIM/cCERTI/libHLA

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/simbricks/COSSIM/cCERTI/build_certi")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libhla" TYPE FILE FILES
    "/home/simbricks/COSSIM/cCERTI/libHLA/libhla.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAtypesIEEE1516.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAbuffer.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAbasicType.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAenumeratedType.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAfixedArray.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAvariableArray.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAfixedRecord.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/HLAvariantRecord.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/sha1.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/MurmurHash2.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/MurmurHash3.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/PMurHash.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/tlsf.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/MessageBuffer.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/MsgBuffer.h"
    "/home/simbricks/COSSIM/cCERTI/libHLA/Clock.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/PosixClock.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/GettimeofdayClock.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/SHM.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/Semaphore.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/SHMPosix.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/SHMSysV.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/SemaphorePosix.hh"
    "/home/simbricks/COSSIM/cCERTI/libHLA/SemaphoreSysV.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/simbricks/COSSIM/cCERTI/libHLA/hlaomtdif2cpp.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/simbricks/COSSIM/cCERTI/libHLA/libHLAd.so.4.0.0"
    "/home/simbricks/COSSIM/cCERTI/libHLA/libHLAd.so.4"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so.4"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/simbricks/COSSIM/cCERTI/libHLA/libHLAd.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libHLAd.so")
    endif()
  endif()
endif()

