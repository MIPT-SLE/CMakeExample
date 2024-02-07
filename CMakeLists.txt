cmake_minimum_required(VERSION 3.20)
SET(MODULE_NAME cmake_example)
project(${MODULE_NAME})

add_subdirectory(src)

if (WITH_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif ()
