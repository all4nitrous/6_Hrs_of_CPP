/* Do While Loops */
#include <iostream>

using namespace std;

int main() 
{

    int number;

    do
    {
        cout << "Enter a positive #: ";
        cin >> number;
    }while(number < 0);


    return 0;
}