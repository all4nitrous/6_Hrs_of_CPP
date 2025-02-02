/* Random Number Generator */
#include <iostream>

using namespace std;

int main() 
{

    srand(time(NULL));

    int num1 = (rand() % 100) + 1;
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 6) + 1; // Add one to start index from 1

    cout << "*********" << endl;

    cout << num1 << endl;

    cout << "*********" << endl;

    cout << num2 << endl;

    cout << "*********" << endl;

    cout << num3 << endl;

    cout << "*********" << endl;


    return 0;

}