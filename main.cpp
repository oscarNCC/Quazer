#include "main.h"
#include <iostream>
#include <string>
#include "Round.cpp"
using namespace std;

void showPlayerCredit()
{
    cout << "Player credit: " + to_string(credit) << endl;
}
void end()
{

    cout << "Your credit is under 20, Game Over~!" << endl;
    system("pause");
}
int main()
{
start:
    while (credit > 19)
    {
        showPlayerCredit();
        cout << "Play? Yes[1] No[2]";
        int x;
        cin >> x;
        cout << "---------------------------------------------------------------" << endl;
        if (x == 1)
        {
            cout << "---------------------------------------------------------------" << endl;
            cout << "Which level you choose?\nLow [1],Med[2],High[3]" << endl;
            int level;
            cin >> level;
            if (level == 1)
            {
                credit -= 20;
            }
            else if (level == 2)
            {
                credit -= 100;
            }
            else if (level == 3 && won > 3 && credit > 200) //Player need to win at least 300 round and have more than 200 credit to access High Stake game
            {
                credit -= 200;
            }
            else if (level == 3)
            {
                cout << "---------------------------------------------------------------" << endl;
                cout << "NOT ALLOW to play High stake!\nRequirement: Win 3 games and >200 credits.\nTotal Win: " + to_string(won) + " Credit:" + to_string(credit) << endl;
                cout << "---------------------------------------------------------------" << endl;
                goto start;
            }
            int r = createRound(level);
            credit += r;
        }
        else if (x == 2)
        {
            cout << "Final credit:" + to_string(credit) + " You win:" + to_string(won) << endl;
            system("pause");
            break;
        }
    }
    if (credit < 20)
    {
        end();
    }

    return 0;
};
