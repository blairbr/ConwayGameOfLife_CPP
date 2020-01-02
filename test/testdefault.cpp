#include <gtest/gtest.h>
#include "rules.h"

using namespace ::testing;

TEST(neighbors, liveCellWithFewerThanTwoLiveNeighborsDies) {
    bool cellIsAlive = true;
    int neighborCount = 1;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), false);
}
TEST(neighbors, liveCellWithTwoLiveNeighborsLives) {
    bool cellIsAlive = true;
    int neighborCount = 2;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), true);
}
TEST(neighbors, liveCellWithTrheeLiveNeighborsLives) {
    bool cellIsAlive = true;
    int neighborCount = 3;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), true);
}
TEST(neighbors, liveCellWithMoreThanThreeLiveNeighborsDies) {
    bool cellIsAlive = true;
    int neighborCount = 4;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), false);
}