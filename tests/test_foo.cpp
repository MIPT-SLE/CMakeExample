#include <gtest/gtest.h>

#include <cmake_example/Header.hpp>

TEST(CMakeExample, FOO) {
    constexpr int size = 100;
    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(cmake_example::foo(i), i);
    }
}
