#include "lowStake.h"
// Low-Stake roll() method
int lowStake::roll(bool chooseSpinner)
{
    // if chooseSpinner == true => draw 4-7
    if (chooseSpinner == true)
    {
        srand(time(NULL));
        int randomNum = rand() % 100 + 1;
        if (randomNum <= 80)
        {
            number= rand() % 2 + 4;
        }
        else
        {
            number= rand() % 2 + 6;
        }
    }
    else /// else it will draw 1-8
    {
        srand(time(NULL));
        int randomNum = rand() % 100 + 1;
        if (randomNum <= 80)
        {
          number= rand() % 4 + 1; // 80% of chance to draw a  number from 1 to 4
        }
        else
        {
            number= rand() % 4 + 5; //20 % of chance to draw a number from 5 to 8
        }
    }
    return number;
}
