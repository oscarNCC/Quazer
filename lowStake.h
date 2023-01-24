//lowStake.h
#ifndef SPINNER_H
#define SPINNER_H
#include "Spinner.h"
#endif
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#ifndef LOWSTAKE_H
#define LOWSTAKE_H

class lowStake : public Spinner{
    private:
        int number;
        bool chooseSpinner;
    public:
       
        int roll(bool chooseSpinner);
};

#endif