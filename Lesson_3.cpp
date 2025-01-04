#include <iostream>

int main() {

    const double PI = 3.14159; //Consts' should be written in CAPS
    double radius =  10;
    double circumference = 2 * PI * radius;

    std::cout <<  circumference << "cm" << std::endl;

    return 0;
}