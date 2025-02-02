/* Lesson on User Defined Functions */

#include <iostream>

using namespace std;

string name = "Nicholas";
int age = 28;

void happyBirthday(string name, int age);

int main() {


    happyBirthday(name, age);


    return 0;
}

void happyBirthday(string name, int age) 
{
    for( int i = 1; i <= 3; i++) {
    cout << "Happy birthday to you " << name << "!" << endl;
    }

    cout << "You are " << age << " now!" << endl;

}