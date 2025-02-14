/* Const Parameters */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printInfo(const string name, const int age);

int main()
{
    string name = "Nicholas";
    int age = 21;

    printInfo(name, age);

    return 0;
}

void printInfo(const string name, const int age)
{
    cout << name << endl;
    cout << age << endl;
}