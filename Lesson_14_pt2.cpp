#include <iostream>

using namespace std;

void invalidInput() {
    cout << "That is not a valid input" << endl;
}

int main() {

    int number;
    cout << "Enter a number here to find out if it's odd or even" << endl;
    cin >> number;

    (cin.fail() || number < 0)
        ? (invalidInput(), cout)
        : (number % 2 == 1 ? cout << "The number is ODD" : cout << "The number is EVEN" << endl);



    return 0;
}