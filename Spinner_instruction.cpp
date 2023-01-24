#include <iostream>
#ifndef SPINNER_H
#define SPINNER_H
#include "Spinner.h"
#endif
#include "lowStake.h"
#include"lowStake.cpp"
#include "medStake.h"
#include "medStake.cpp"
#include "highStake.h"
#include "highStake.cpp"

using namespace std;
//Instruction of how to call three Spinner
int main()
{

    //Med Stake Spinner  
    medStake ms ;
    ms.roll(true);//4-7 Spinner and return an int
    ms.roll(false);//1-8 Spinner and return an int
    //Low Stake Spinner
    lowStake ls;
    ls.roll(true);//4-7 Spinner and return an int
    ls.roll(false);//1-8 Spinner and return an int
    //HighStake
    highStake hs;
    hs.roll(true); //4-7 Spinner and return an int
    hs.roll(false);//1-8 Spinner and return an int
    // if user want to draw a 4-7 number from medStake just call ms.roll(true);
    cout<<hs.roll(false);

    return 0;
}