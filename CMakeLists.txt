######################################################
# @file     CMakeLists.txt
# @brief    The project file for CMake
# @author   dragon-archer <dragon-archer@outlook.com>
# @license  MIT License
#           Copyright (C) 2019 dragon-archer
######################################################

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

PROJECT(libextcpp CXX)

SET(GNU_TARGET extcpp)
SET(MSVC_TARGET libextcpp)

if(${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
	MESSAGE("Building with GCC...")
	SET(TARGET ${GNU_TARGET})
elseif(${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
	MESSAGE("Building with MSVC...")
	SET(TARGET ${MSVC_TARGET})
endif()

SET(BUILD_DIR build/)

INCLUDE_DIRECTORIES(./include)

AUX_SOURCE_DIRECTORY(./src SRC_DIR)

SET(SRC ${SRC_DIR})

ADD_LIBRARY(${TARGET} SHARED ${SRC})

execute_process(COMMAND cp ../LICENSE COPYING)

INSTALL(FILES README.md LICENSE ${BUILD_DIR}/COPYING DESTINATION /)
INSTALL(TARGETS ${TARGET} LIBRARY DESTINATION lib)
INSTALL(DIRECTORY include/ DESTINATION include FILES_MATCHING PATTERN "*.h|*.hpp|*.inl")
INSTALL(DIRECTORY src/ DESTINATION src FILES_MATCHING PATTERN "*.cpp")
