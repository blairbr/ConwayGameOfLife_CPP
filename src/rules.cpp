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

    int neighbors = 0;
    if(grid[row][col+1])
        neighbors++;
    if(grid[row][col-1])
        neighbors++;
    if(grid[row-1][col])
        neighbors++;
    if(grid[row+1][col])
        neighbors++;
    if(grid[row-1][col-1])
        neighbors++;
    if(grid[row-1][col+1])
        neighbors++;
    if(grid[row+1][col-1])
        neighbors++;
    return neighbors;
}