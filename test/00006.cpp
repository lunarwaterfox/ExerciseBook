#include <gtest/gtest.h>
#include <00006.hpp>

class ZigZag: public testing::Test {
public:
    Solution s;
};

TEST_F(ZigZag, oneLetterWord) {
    ASSERT_EQ(s.convert("W", 5), "W");
}

TEST_F(ZigZag, wordLessThanLevel) {
    ASSERT_EQ(s.convert("WCN", 5), "WCN");
}

TEST_F(ZigZag, wordHasHalfZig) {
    ASSERT_EQ(s.convert("WCNM", 3), "WCMN");
}

TEST_F(ZigZag, wordHasAFullZip) {
    ASSERT_EQ(s.convert("WCNMLG", 3), "WLCMGN");
}

