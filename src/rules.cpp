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