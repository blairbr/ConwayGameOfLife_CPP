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
TEST(neighbors, deadCellWithThreeNeighborsComesToLife) {
    bool cellIsAlive = false;
    int neighborCount = 3;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), true);

}
TEST(neighbors, deadCellWithTwoNeighborsStaysDead) {
    bool cellIsAlive = false;
    int neighborCount = 2;

    EXPECT_EQ(applyRules(cellIsAlive, neighborCount), false);

}
TEST(neighbors, returnsOneIfOnlyRightNeighborIsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[1][2] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 1);

}

TEST(neighbors, returnsOneIfOnlyLeftNeighborIsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[1][0] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 1);

}

TEST(neighbors, returnsTwoIfLeftAndRightNeighborsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[1][0] = true;
    grid[1][2] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 2);

}
TEST(neighbors, returnsOneIfOnlyTopNeighborIsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[0][1] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 1);

}
TEST(neighbors, returnsOneIfOnlyBottomNeighborIsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[2][1] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 1);

}

TEST(neighbors, returnsOneIfOnlyTopLeftNeighborIsAlive) {

    bool grid[NUM_ROWS][NUM_COLS] = {false};

    grid[0][0] = true;

    int row = 1;
    int col = 1;

    EXPECT_EQ(countNeighbors(grid, row, col), 1);

}