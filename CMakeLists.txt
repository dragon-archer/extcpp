cmake_minimum_required(VERSION 3.0)

PROJECT(libextcpp)

include_directories(./include)

aux_source_directory(./src SRC_DIR)

set(SRC ${SRC_DIR})

add_library(${PROJECT_NAME} ${SRC})
