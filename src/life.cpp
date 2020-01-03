#include "life.h"
#include "Arduino.h"

bool grid[NUM_ROWS][NUM_COLS];
bool altGrid[NUM_ROWS][NUM_COLS];

#define EMPTY_ANALOG_READ_PIN 7

void gameSetup()
{
    int analogReadResult = analogRead(EMPTY_ANALOG_READ_PIN);
    randomSeed(analogReadResult);
    for (int i = 0; i < sizeof(grid); i++)
    {
        long result = random(2);
    }
    
}

bool applyRules(bool cellIsAlive, int numberOfNeighbors) {
    if(numberOfNeighbors == 2 && !cellIsAlive)
    {
        return false;
    }
    if(numberOfNeighbors > 1 && numberOfNeighbors < 4)
    {
        return true;
    }
    return false;
}

int countNeighbors(int row, int col) {

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