#include <gtest/gtest.h>
#include "rules.h"

using namespace ::testing;

TEST(neighbors, liveCellWithFewerThanTwoLiveNeighborsDies) {
    bool cellIsAlive = true;
    int neighborCount = 1;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), false);
}