#
# Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License").
# You may not use this file except in compliance with the License.
# A copy of the License is located at
# 
#  http://aws.amazon.com/apache2.0
# 
# or in the "license" file accompanying this file. This file is distributed
# on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
#

# When using AWSSDK package, users need to tell the installation root dir
# by setting up variable as set(AWSSDK_ROOT_DIR, "<path/to/dir>")
# In Windows the dir is like C:/Progra~1/AWSSDK/
# In Unix like system the dir is like /usr/local/
# if AWSSDK_ROOT_DIR doesn't appear, this module will identify it automatically

# By default:
#   The cmake files will all be in <prefix>/lib/cmake dir
#   The hearders will all be in <prefix>/include dir

#   The libraries will all be in <prefix>/lib/<platform_prefix> dir
#   The binaries will all be in <prefix>/bin/<platform_prefix> dir
#   The archives will all be in <prefix>/lib/<platform_prefix> dir if target is shared, 
#   otherwise will be in <prefix>/bin/<platform_prefix> dir.

# Platfrom_prefix is determined on compile time nbu option SIMPLE_INSTALL
# such as "<linux/intel64>"

unset(AWSSDK_FOUND CACHE)

# set default platform prefix to "", but it could be inherited from platfromDeps if any
unset(AWSSDK_PLATFORM_PREFIX CACHE)

include(${CMAKE_CURRENT_LIST_DIR}/AWSSDKConfigVersion.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/sdksCommon.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/platformDeps.cmake)

if (NOT AWSSDK_INSTALL_LIBDIR)
    set(AWSSDK_INSTALL_LIBDIR "lib")
endif()

if (NOT AWSSDK_INSTALL_BINDIR)
    set(AWSSDK_INSTALL_BINDIR "bin")
endif()

if (NOT AWSSDK_INSTALL_INCLUDEDIR)
    set(AWSSDK_INSTALL_INCLUDEDIR "include")
endif()

# on Windows or Win64 dlls are treated as runtime target and installed in bindir
if (WIN32)
    set(AWSSDK_INSTALL_LIBDIR "${AWSSDK_INSTALL_BINDIR}")
endif()


# Compute the default installation root relative to this file.
# from prefix/lib/cmake/AWSSDK/xx.cmake to prefix
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_DEFAULT_ROOT_DIR "${AWSSDK_DEFAULT_ROOT_DIR}" PATH)
if(AWSSDK_DEFAULT_ROOT_DIR STREQUAL "/")
  set(AWSSDK_DEFAULT_ROOT_DIR "")
endif()

# currently AWSSDK_ROOT_DIR is either empty or user specified
if (AWSSDK_ROOT_DIR)
    find_file(AWSSDK_CORE_HEADER_FILE Aws.h
            "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
            "${AWSSDK_DEFAULT_ROOT_DIR}/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
            )
else()
    find_file(AWSSDK_CORE_HEADER_FILE Aws.h
        "/usr/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "/usr/local/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "C:/Progra~1/AWSSDK/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "C:/Program Files/AWSSDK/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "C:/Program Files/aws-cpp-sdk-all/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "C:/Program Files (x86)/aws-cpp-sdk-all/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "C:/AWSSDK/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
        "${AWSSDK_DEFAULT_ROOT_DIR}/${AWSSDK_INSTALL_INCLUDEDIR}/aws/core"
    )
endif()

if (NOT AWSSDK_CORE_HEADER_FILE)
    message(FATAL_ERROR "AWS SDK for C++ is missing, please install it first")
endif()

# based on core header file path, inspects the actual AWSSDK_ROOT_DIR
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_CORE_HEADER_FILE}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)
get_filename_component(AWSSDK_ROOT_DIR "${AWSSDK_ROOT_DIR}" PATH)

if (NOT AWSSDK_ROOT_DIR)
    message(FATAL_ERROR "AWSSDK_ROOT_DIR is not set or can't be calculated from the path of core header file")
endif()


find_library(AWSSDK_CORE_LIB_FILE aws-cpp-sdk-core
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}"
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}/Debug"
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}/DebugOpt"
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}/Release"
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}/RelWithDebInfo"
        "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}/MinSizeRel"
        NO_DEFAULT_PATH)


if (NOT AWSSDK_CORE_LIB_FILE)
    message(FATAL_ERROR "AWS SDK for C++ headers found, but we were unable to locate the binaries. Have you deleted or moved it?
            Please make sure header files and binaries are located in INSTALL_ROOT_DIR/INCLUDE_DIR/ and INSTALL_ROOT_DIR/LIB_DIR/[PLATFORM_PREFIX]/[Debug|Config|OtherConfigs]")
endif()

# based on AWSSDK_CORE_LIB_FILE path, inspects the actual AWSSDK_PLATFROM_PREFIX
get_filename_component(TEMP_PATH "${AWSSDK_CORE_LIB_FILE}" PATH)
get_filename_component(TEMP_NAME "${TEMP_PATH}" NAME)

while (NOT TEMP_NAME STREQUAL ${LIB_SEARCH_PREFIX})
    set(TEMP_PLATFORM_PREFIX "${TEMP_NAME}/${TEMP_PLATFORM_PREFIX}")
    get_filename_component(TEMP_PATH "${TEMP_PATH}" PATH) 
    get_filename_component(TEMP_NAME "${TEMP_PATH}" NAME)
endwhile()

set(AWSSDK_PLATFORM_PREFIX "${TEMP_PLATFORM_PREFIX}")

set(AWSSDK_FOUND "1")
set(AWSSDK_INCLUDE_DIR "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_INCLUDEDIR}")
set(AWSSDK_CMAKE_DIR "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/cmake")
set(AWSSDK_LIB_DIR "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_LIBDIR}/${AWSSDK_PLATFORM_PREFIX}")
set(AWSSDK_BIN_DIR "${AWSSDK_ROOT_DIR}/${AWSSDK_INSTALL_BINDIR}/${AWSSDK_PLATFORM_PREFIX}")


if (AWSSDK_PLATFORM_DEPS_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS_LIBS}")
endif()

if (AWSSDK_CRYPTO_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${AWSSDK_CRYPTO_LIBS}")
endif()

if (AWSSDK_CLIENT_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${AWSSDK_CLIENT_LIBS}")
endif()

if (AWSSDK_ADDITIONAL_LIBS)
	set(AWSSDK_PLATFORM_DEPS "${AWSSDK_PLATFORM_DEPS}" "${AWSSDK_ADDITIONAL_LIBS}")
endif()

message(STATUS "Found AWS SDK for C++, Version: ${PACKAGE_VERSION}, Install Root:${AWSSDK_ROOT_DIR}, Platform Prefix:${AWSSDK_PLATFORM_PREFIX}, Platform Dependent Libraries: ${AWSSDK_PLATFORM_DEPS}")


# copy libs of services in SERVICE_LIST and all there dependent libs to DEST_DIR
# CONFIG denote copy release or debug version
macro(AWSSDK_CPY_DYN_LIBS SERVICE_LIST CONFIG DEST_DIR)
    set(ALL_SERVICES "core")

    foreach(SVC IN LISTS ${SERVICE_LIST})
        list(APPEND ALL_SERVICES ${SVC})
        get_dependencies_for_sdk(${SVC} DEPENDENCY_LIST)
        if (DEPENDENCY_LIST)
            string(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            list(APPEND ALL_SERVICES ${LIST_RESULT})
        endif()
        unset(DEPENDENCY_LIST CACHE)
    endforeach()
    list(REMOVE_DUPLICATES ALL_SERVICES)

    foreach(SVC IN LISTS ALL_SERVICES)
        find_library(LIB_PATH "aws-cpp-sdk-${SVC}" "${AWSSDK_LIB_DIR}/${CONFIG}" NO_DEFAULT_PATH)
        if (NOT LIB_PATH)
            message(FATAL_ERROR "Couldn't find library aws-cpp-sdk-${SVC}")
        endif()
        file(COPY ${LIB_PATH} DESTINATION ${DEST_DIR}) 
        unset(LIB_PATH CACHE)
    endforeach()
endmacro(AWSSDK_CPY_DYN_LIBS)

# output link libs command to OUTPUT_VAR which required by all services from SERVCE_LIST
macro(AWSSDK_DETERMINE_LIBS_TO_LINK SERVICE_LIST OUTPUT_VAR)
    set(ALL_SERVICES "core")

    foreach(SVC IN LISTS ${SERVICE_LIST})
        list(APPEND ALL_SERVICES ${SVC})
        get_dependencies_for_sdk(${SVC} DEPENDENCY_LIST)
        if (DEPENDENCY_LIST)
            string(REPLACE "," ";" LIST_RESULT ${DEPENDENCY_LIST})
            list(APPEND ALL_SERVICES ${LIST_RESULT})
        endif()
        unset(DEPENDENCY_LIST CACHE)
    endforeach()
    list(REMOVE_DUPLICATES ALL_SERVICES)
    set(${OUTPUT_VAR} "")
    foreach(DEP IN LISTS ALL_SERVICES)
        list(APPEND ${OUTPUT_VAR} "aws-cpp-sdk-${DEP}")
    endforeach()
endmacro(AWSSDK_DETERMINE_LIBS_TO_LINK)

# output high level lib dependencies such as for transfter; sqs; dynamodb etc.
macro(AWSSDK_LIB_DEPS HIGH_LEVEL_LIB_NAME OUTPUT_VAR)
    get_dependencies_for_sdk(${HIGH_LEVEL_LIB_NAME} DEPENDENCY_LIST)
    if (DEPENDENCY_LIST)
        string(REPLACE "," ";" ${OUTPUT_VAR} ${DEPENDENCY_LIST})
        list(APPEND ALL_SERVICES ${LIST_RESULT})
    endif()
    list(APPEND ${OUTPUT_VAR} "core")
    list(REMOVE_DUPLICATES ${OUTPUT_VAR})
endmacro(AWSSDK_LIB_DEPS)
