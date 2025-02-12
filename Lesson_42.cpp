/* pass by value vs pass by reference */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string x = "Kool-Aid";
    string y = "Water";
    string temp;

    temp = x;
    x = y;
    y = temp;

    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
    
    

    return 0;
}