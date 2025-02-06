/* Iterating over the elements of an array */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{

    std::string students[] = {"Luke", "Lucas", "Luka", "Anton"};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++) 
    {
        cout << students[i] << endl;
    }

    for(int j = 0; j < sizeof(grades)/sizeof(char); j++) 
    {
        cout << grades[j] << endl;
    }

    return 0;
}