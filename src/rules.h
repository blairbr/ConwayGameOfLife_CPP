#ifndef _RULES_H_
#define _RULES_H_

#define NUM_ROWS 64
#define NUM_COLS 32

bool applyRules(bool cellIsAlive, int numberOfNeighbors);
int countNeighbors(bool grid[NUM_ROWS][NUM_COLS], int x, int y);

#endif