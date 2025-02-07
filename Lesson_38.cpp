/* Lesson on the fill() function */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
    const int SIZE = 99;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburgers");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs");

    for(std::string food : foods) 
    {
        cout << food << endl;
    }

    return 0;
}