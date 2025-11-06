#include <iostream>
using namespace std;

int main()
{
    int randnum, guess = 0, tries = 0, difficulty = 0, level;
    srand(time(0));
    cout << "************* Number Guessing Game *************" << endl;

    cout << "Enter the difficulty (low = 1, difficult = 2, hard = 3): ";
    cin >> level;

    while(level != 1 and level != 2 and level != 3)
    {
        cout << "Enter the difficulty (low = 1, difficult = 2, hard = 3): ";
        cin >> level;
    }

     switch (level)
     {
        case 1:
        difficulty = 100;
        randnum = rand() % difficulty + 1;
        break;

        case 2:
        difficulty = 500;
        randnum = rand() % difficulty + 1;
        break;

        case 3:
        difficulty = 1000;
        randnum = rand() % difficulty + 1;
        break;
     }

    while(randnum != guess)
    {
        cout << "Guess the number between (1-" << difficulty << "): ";
        cin >> guess;
        
        if(guess > randnum)
        {
            cout << "too high!" << endl;
            tries++;
        }

        else if(guess < randnum)
        {
            cout << "too low!" << endl;
            tries++;
        }

        else if(guess == randnum - 3 or guess == randnum + 3)
        {
            cout << "you are too close!" << endl;
            tries++;
        }

        else
        {
            cout << "************************************************" << endl;
            cout << "CORRECT!, GOOD JOB!" << endl;
            cout << "the number is " << randnum << endl;
            cout << "you finshed the game with " << tries << " tries" << endl;
        }
    }
    cout << "************************************************" << endl;
    return 0;
}
