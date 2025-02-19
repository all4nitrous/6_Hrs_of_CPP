/* Lesson on Null Pointers */
// Null Pointer = Value meaning it has no value/doesn't point to anything.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int *pointer = nullptr;
    int x = 123; //

    pointer = &x; // Assigns address, remove this, triggers nullptr

    if(pointer == nullptr)
    {
        cout << "address was not assigned!" << endl;
    }
    
    else
    {
        cout << "address was assigned!" << endl;
        cout << *pointer << endl;
    }
    
    return 0;
}