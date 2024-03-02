cmake_minimum_required(VERSION 3.20)
project(cmake_example)

add_subdirectory(src)

# Для включения тестов нужно вызвать команду cmake с опцией -DWITH_TESTS=ON
if (WITH_TESTS)
    enable_testing()
    add_subdirectory(tests)
endif ()
