/* If Statements */
#include <iostream>

int main() {

    using namespace std;

    int age;

    cout << "Enter your age: " << endl;

    cin >> age;

    if(age >= 18) {
        cout << "Welcome to the site!" << endl;
    } 
    else if (age < 0)
    {
        cout << "You haven't been born yet!" << endl;
    }
    else {
        cout << "You are not old enough to enter!" << endl;
    }

    return 0;
}