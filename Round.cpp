#include "Round.h"
#include "lowStake.cpp"
#include "medStake.cpp"
#include "highStake.cpp"
#include <iostream>
#include <string>

using namespace std;

int chooseSpinner(int level)
{
    int number = 0;
 
    Spinner *sp;
    switch (level)
    {
    case 1:
        sp = dynamic_cast<Spinner *>(new lowStake);       
        break;
    case 2:
        sp = dynamic_cast<Spinner *>(new medStake);       
        break;
    case 3:
        sp = dynamic_cast<Spinner *>(new highStake);        
        break;
    }

    while (number <= 20)
    {
        int x;
        cout<<"---------------------------------------------------------------"<<endl;
        cout << "Which Spinner? ";
        if (number!=0){
            cout << "Current in hand:" + to_string(number) << endl;
        }else{
             cout <<""<< endl;
        };
        cout<<"4-7 [1] 1-8 [2] STAND [3]"<<endl;   
        cin >> x;

        if (x == 3)
        {
            cout << "Total Number:" + to_string(number) << endl;
            cout << "---------------------------------------------------------------" << endl;
            break;
        }
        else
        {
            int res = sp->roll(x); // 1 is true 2 is false
            number += res;
            cout << "You draw " + to_string(res) + "\n";
            cout << "Total Number:" + to_string(number) << endl;
            cout << "---------------------------------------------------------------" << endl;
            
        }
    };
    delete sp;
    return number;
}
int checkRule(int level, int number)
{
    if (level == 1)
    {
        level = 20;
    }
    else if (level == 2)
    {
        level = 100;
    }
    else
    {
        level = 200;
    };

    switch (number)
    {
    case 15:     
        won+=1;  
        return level * 1.25;
    case 16:
        won+=1;  
        return level * 1.5;
    case 17:
        won+=1;  
        return level*2;
    case 18:
        won+=1;  
        return level * 2.25;
    case 19:
        won+=1;  
        return level * 2.5;
    case 20:
        won+=1;  
        return level+level * 3;
    default:
        if (number <= 14 || number > 20)
        {
            return 0;
        };
    };
};

int createRound(int level)
{   
    return checkRule(level, chooseSpinner(level)); // Return how many credits player win from this round.
    //check(A,B)  A = 20,100,200  //B=what is the total number in that round
    // e.g checkRule(20,18)   , then it will return 20*2.25 =45
};
