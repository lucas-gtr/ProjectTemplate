#include <gtest/gtest.h>
#include "ModuleExample/Example.hpp"

TEST(ExampleTest, AddPositiveNumbers) {
    Example example;
    EXPECT_EQ(example.Add(2, 3), 5);
}

TEST(ExampleTest, AddNegativeNumbers) {
    Example example;
    EXPECT_EQ(example.Add(-4, -6), -10);
}

TEST(ExampleTest, AddZero) {
    Example example;
    EXPECT_EQ(example.Add(0, 0), 0);
    EXPECT_EQ(example.Add(5, 0), 5);
    EXPECT_EQ(example.Add(0, -3), -3);
}
