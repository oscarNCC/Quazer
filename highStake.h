//highStake.h
#ifndef SPINNER_H
#define SPINNER_H
#include "Spinner.h"
#endif
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#ifndef HIGHSTAKE_H
#define HIGHSTAKE_H

class highStake : public Spinner{
    private:
        int number;
        bool chooseSpinner;
    public:
       
        int roll(bool chooseSpinner);
};

#endif