######################################################
# @file     CMakeLists.txt
# @brief    The project file for CMake
# @author   dragon-archer <dragon-archer@outlook.com>
# @license  MIT License
#           Copyright (C) 2019 dragon-archer
######################################################

cmake_minimum_required(VERSION 3.0)

PROJECT(extcpp)

include_directories(./include)

aux_source_directory(./src SRC_DIR)

set(SRC ${SRC_DIR})

add_library(lib${PROJECT_NAME} ${SRC})
