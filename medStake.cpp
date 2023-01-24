#include "medStake.h"


int medStake::roll(bool chooseSpinner)
{
    // if chooseSpinner == true => draw 4-7
    if (chooseSpinner == true)    {
        srand(time(NULL));
        number = rand() % 4 + 4;
    }
    else
    {
        // else it will draw 1-8
        srand(time(NULL));
        number = rand() % 8 + 1;
    }
    return number;
}


