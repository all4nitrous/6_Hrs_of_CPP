/* Lesson on User Input */
#include <iostream>

/*

cout << (insertion operator)
cin >> (extraction operator)

*/

int main() {

    using namespace std;

    string name;

    cout << "What's your name?: " << endl;
    cin >> name;

    cout << "Hello " << name;

    return 0;
}