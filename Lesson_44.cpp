/* Lesson on pointers */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{

    string name = "Nicholas";
    int age = 28;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *pFreePizzas << endl;

    return 0;
}