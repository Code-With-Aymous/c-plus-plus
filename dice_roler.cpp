#include <iostream>
using namespace std;

void dice1()
{
    cout << "+-------+\n";
    cout << "|       |\n";
    cout << "|   *   |\n";
    cout << "|       |\n";
    cout << "+-------+\n\n";
}

void dice2()
{
    cout << "+-------+\n";
    cout << "| *     |\n";
    cout << "|       |\n";
    cout << "|     * |\n";
    cout << "+-------+\n\n";
}

void dice3()
{
    cout << "+-------+\n";
    cout << "| *     |\n";
    cout << "|   *   |\n";
    cout << "|     * |\n";
    cout << "+-------+\n\n";
}

void dice4()
{
    cout << "+-------+\n";
    cout << "| *   * |\n";
    cout << "|       |\n";
    cout << "| *   * |\n";
    cout << "+-------+\n\n";
}

void dice5()
{
    cout << "+-------+\n";
    cout << "| *   * |\n";
    cout << "|   *   |\n";
    cout << "| *   * |\n";
    cout << "+-------+\n\n";
}

void dice6()
{
    cout << "+-------+\n";
    cout << "| *   * |\n";
    cout << "| *   * |\n";
    cout << "| *   * |\n";
    cout << "+-------+\n";
}


int main()
{
    char enter;
    int wins=0, fails=0;
    while(enter != 'n')
    {
    int roll, computer_roll;
    srand(time(0));
    roll = rand() % 6 + 1;
    computer_roll = rand() % 6 + 1;

    cout << "************* DICE ROLL SIMULATOR *************" << endl;

    if(roll == 1)
    {
        dice1();
    }

    else if(roll == 2)
    {
        dice2();
    }

    else if(roll == 3)
    {
        dice3();
    }

    else if(roll == 4)
    {
        dice4();
    }

    else if(roll == 5)
    {
        dice5();
    }

    else if(roll == 6)
    {
        dice6();
    }

    cout << "Your score: " << roll << endl;

    if(computer_roll == 1)
    {
        dice1();
    }

    else if(computer_roll == 2)
    {
        dice2();
    }

    else if(computer_roll == 3)
    {
        dice3();
    }

    else if(computer_roll == 4)
    {
        dice4();
    }

    else if(computer_roll == 5)
    {
        dice5();
    }

    else if(computer_roll == 6)
    {
        dice6();
    }

    cout << "Computer score: " << computer_roll << endl;

    if(roll > computer_roll)
    {
    wins++;
    cout << "/*********************************************\\" << endl;
    cout << "|        Player Wins! | Computer lose!        |"<< endl; 
    cout << "\\*********************************************/" << endl;
    }

    else if(roll < computer_roll)
    {
    fails++;
    cout << "/*********************************************\\" << endl;
    cout << "|        Computer Wins! | Player lose!        |"<< endl; 
    cout << "\\*********************************************/" << endl;
    }

    else
    {
    cout << "/*********************************************\\" << endl;
    cout << "|                This is TIE!                 |"<< endl; 
    cout << "\\*********************************************/" << endl;
    }

    cout << "Is you want another roll? (y/n): ";
    cin >> enter;

}
    cout << "your wins / computer fails: " << wins << endl;
    cout << "your fails / computer wins: " << fails << endl;
    return 0;
}
