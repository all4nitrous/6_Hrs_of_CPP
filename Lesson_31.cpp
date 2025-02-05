/* Lesson on Arrays */
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{

    // std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    cout << cars[0] << endl;
    cout << cars[1] << endl;
    cout << cars[2] << endl;
    cout << "********" << endl;

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    cout << prices[0] << endl;
    cout << prices[1] << endl;
    cout << prices[2] << endl;
    cout << prices[3] << endl;


    return 0;
}