/* Lesson on Sizeof() operator */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    std::string name = "Nicholas";
    double gpa;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    cout << sizeof(grades)/sizeof(char) << " bytes" << endl;


    return 0;
}