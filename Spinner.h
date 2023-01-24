#include <iostream>
#include <string>
class Spinner {
    public:
        int number;
        bool chooseSpinner;       
    public:
        virtual int roll(bool chooseSpinner) = 0;

};