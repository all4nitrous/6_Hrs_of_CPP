/* Lesson on Nested Loops */
#include <iostream>

using namespace std;

int main()
{

    int rows;
    int columns;
    char symbol;

    cout << "How many rows?: " << endl;
    cin >> rows;

    cout << "How many columns?: " << endl;
    cin >> columns;

    cout << "Enter a symbol to use: " << endl;
    cin >> symbol;

    cout << endl;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {   
            cout << symbol;
        }
        cout << endl;
    }
    
    

    return 0;
}