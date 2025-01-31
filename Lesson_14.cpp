/* Lesson on Ternanry Operators */
#include <iostream>

using namespace std;

void invalidInput() {
        cout << "That is not a valid input" << endl;
    }

int main() {

    int grade;
    cout << "Enter your grade here (0-100)" << endl;
    cin >> grade;

     (cin.fail() || grade < 0 || grade > 100)
        ? (invalidInput(), cout)
        : (cout << (grade >= 60 ? "You Pass!\n" : "You fail!\n") << endl);


    return 0;
}

