#include <iostream>

using namespace std;

string concatStrings(string string1, string string2);

int main() 
{

    string firstName;
    string lastName;
    

    cout << "Enter your first name" << endl;
    cin >> firstName;
    cout << "Enter your last name" << endl;
    cin >> lastName;

    string fullName = concatStrings(firstName, lastName);
    cout << "Hello " << fullName << endl;

    return 0;

}

string concatStrings(string string1, string string2)
{


    return string1 + " " + string2;
}