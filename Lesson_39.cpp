/* Fill an array with user input */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()  
{

    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i++) 
    {
        cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": " << endl;  // + 1 added to start at an index of one
        std::getline(cin, temp);
        if(temp == "q")
            break;
        else 
        {
            foods[i] = temp;
        }
    }

    cout << "You like the following food:" << endl;
    
    for(int i = 0; !foods[i].empty(); i++)
    {
        cout << foods[i] << endl;
    }

    return 0;
}