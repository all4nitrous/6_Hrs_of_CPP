/* Lesson on foreach loop */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{

    std::string students[] = {"Luke", "Lucas", "Luka", "Anton"};
    int grades[] = {65, 72, 81, 93};

    for(std::string student : students)
    {
        cout << student << endl;
    }

    for (int grade : grades)
    {
        cout << grade << endl;
    }


    return 0;
}