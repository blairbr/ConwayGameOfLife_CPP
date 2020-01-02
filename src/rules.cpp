#include "rules.h"

bool applyRules(bool cellIsAlive, int numberOfNeighbors) {
    if(numberOfNeighbors ==2 && !cellIsAlive)
    {
        return false;
    }
    if(numberOfNeighbors > 1 && numberOfNeighbors < 4)
    {
        return true;
    }
    return false;

}

int countNeighbors(bool grid[NUM_ROWS][NUM_COLS], int row, int col) {

    if(grid[row][col+1])
        return 1;

    return 0;
}