#include "rules.h"

bool applyRules(bool cellIsAlive, int numberOfNeighbors) {
    if(numberOfNeighbors > 1 && numberOfNeighbors < 4)
    {
        return true;
    }
    return false;

}