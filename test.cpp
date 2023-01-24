
#include "Round.cpp"
#include <iostream>
#include <string>
using namespace std;


int main()
{
   int r=  createRound ();
   if (r>0){
    cout<<"You Win "+to_string(r);
   }else{
    cout<<"You lose ";
   }
   return 0;
};