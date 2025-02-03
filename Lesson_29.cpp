/* Lesson on Variable Scope */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

void printNum(int myNum);

int main() {

    int myNum = 1;

    printNum(myNum);



    return 0;
}

void printNum(int myNum)
{


    cout << myNum << endl;


}