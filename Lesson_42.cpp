/* pass by value vs pass by reference */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void swap(string &x, string &y);

int main()
{
    string x = "Kool-Aid";
    string y = "Water";
    string temp;

    swap(x, y);

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    
    return 0;
}

void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}