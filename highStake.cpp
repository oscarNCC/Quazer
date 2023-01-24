#include "highStake.h"
// high-Stake roll() method
int highStake::roll(bool chooseSpinner)
{
    // if chooseSpinner == true => draw 4-7
    if (chooseSpinner == true)
    {
        srand(time(NULL));
        int randomNum = rand() % 100 + 1;
        if (randomNum <= 80) // change the possibility 
        {
            number = rand() % 2 + 6; // 80% chance to draw number between 6 to 7
        }
        else
        {
            number = rand() % 2 + 4; //20 % of chance to draw number between  4 to 5
        }
    }
    else /// else it will draw 1-8
    {
        srand(time(NULL));
        int randomNum = rand() % 100 + 1;
        if (randomNum <= 80)
        {
            number = rand() % 4 + 5; // 80% of chance to draw a  number from 5to8
        }
        else
        {
            number = rand() % 4 + 1;// 20 % of chance to draw a number from 1to 4
        }
    }
    return number;
}
