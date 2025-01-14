/* Lesson on User Input */
#include <iostream>

/*

cout << (insertion operator)
cin >> (extraction operator)

*/

int main() {

    using namespace std;

    string name;
    int age;

    cout << "What's your full name?: " << endl;;
    getline(cin >> ws, name);

    cout << endl;

    cout << "What's your age?: " << endl;
    cin >> age;

    cout << endl;

    cout << "Hello " << name << "!" << endl;
    cout << "you are " << age << " years old!" << endl;

    return 0;
}