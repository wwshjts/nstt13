#include <gtest/gtest.h>
#include "../src/matcher.hpp"

TEST(index_test, simple) {
    EXPECT_EQ(0, getIndexOfFirstMatch([](bool b) { return b; }, true, false, false));
    EXPECT_EQ(1, getIndexOfFirstMatch([](bool b) { return b; }, false, true, true));
    EXPECT_EQ(2, getIndexOfFirstMatch([](bool b) { return b; }, false, false, true));
    EXPECT_EQ(3, getIndexOfFirstMatch([](bool b) { return b; }, false, false, false));
}

int main() {
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
