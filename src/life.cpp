#include "life.h"
#include "Arduino.h"

bool grid[NUM_ROWS][NUM_COLS];
bool altGrid[NUM_ROWS][NUM_COLS];

#define EMPTY_ANALOG_READ_PIN 7

void gameSetup()
{
    int analogReadResult = analogRead(EMPTY_ANALOG_READ_PIN);
    randomSeed(analogReadResult);
    
    for(int x = 0; x < 64; x++)
        for(int y = 0; y < 32; y++)
        {
           grid[x][y] = random(3) >= 2;
           altGrid[x][y] = random(3) >= 1;
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