/* Number Guessing Game */

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() 
{

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "***** Number Guessing Game ******" << endl;

    do
    {
        cout << "Enter a guess between (1-100): " << endl;
        cin >> guess;
        tries++;

        if(guess > num)
        {
            cout << "Too high!" << endl;
        }
        else if(guess < num) 
        {
            cout << "Too Low!" << endl;
        }

        else
        {
            cout << "CORRECT! # of tries: " << tries << endl;
        }
    } while(guess != num);

    cout << "*****************************" << endl;

    return 0;

}