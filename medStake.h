//medStake.h
#ifndef SPINNER_H
#define SPINNER_H
#include "Spinner.h"
#endif

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


#ifndef MEDSTAKE_H
#define MEDSTAKE_H

class medStake : public Spinner {
    private:
        int number;
        bool chooseSpinner;
    public:
       
        int roll(bool chooseSpinner);
};

#endif