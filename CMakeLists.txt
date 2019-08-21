######################################################
# @file     CMakeLists.txt
# @brief    The project file for CMake
# @author   dragon-archer <dragon-archer@outlook.com>
# @license  MIT License
#           Copyright (C) 2019 dragon-archer
######################################################

CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

PROJECT(extcpp)

INCLUDE_DIRECTORIES(include)

AUX_SOURCE_DIRECTORY(src SRC_DIR)

SET(SRC ${SRC_DIR})

ADD_LIBRARY(${PROJECT_NAME} ${SRC})
