#include "Arduino.h"
#include <gtest/gtest.h>
#include "life.h"

using namespace ::testing;

class random : public ::testing::Test {
 protected:
  void SetUp() override {
     mockInit();
  }
};

TEST_F(random, shouldCallRandomSeedOnce)
{
    gameSetup();
    EXPECT_EQ(numCallsToRandSeed, 1);
}

TEST_F(random, shouldPassCorrectValueToRandomSeed)
{
    gameSetup();
    EXPECT_EQ(numPassedToRandSeed, 42);
}

TEST_F(random, shouldCallAnalogRead)
{
    gameSetup();
    EXPECT_EQ(numCallsToAnalogRead, 1);
}

// TEST_F(display, setsRightNumberOfPixels) {

//     grid[1][1] = true;
//     grid[2][2] = true;
//     grid[3][3] = true;
//     grid[14][4] = true;
//     grid[5][5] = true;

//     testMatrix.display(grid);

//     EXPECT_EQ(testMatrix.getPixelAssignmentCount(), 5);
// }