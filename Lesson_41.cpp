/* Memory Addresses */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{

    std::string name = "Nicholas";
    int age = 28;
    bool student = true;

    cout << &name << endl;
    cout << &age << endl;
    cout << &student << endl;

    return 0;
}