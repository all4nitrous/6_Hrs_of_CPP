/* Lesson on Logical Operators */
#include <iostream>

using namespace std;

int main() {

    int temp;
    bool sunny = false;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp <= 0 || temp < 30){
        cout << "The temperature is bad!" << endl;
    }
    else {
        cout << "The temperature is good!" << endl;
    }
    if(!sunny) {
        cout << "It is cloudy outside!" << endl;
    }
    else {
        cout << "It is sunny outside" << endl;
    }


    return 0;
}