/* Lesson on Type Conversion */
#include <iostream>

int main() {

    using namespace std;

    // int x = 3.14;

    double x = 3.14; //Implicit = Automatic

    // double x = (int) 3.14; Explicit = Precede value with new data types

    // char`x = 100;

    cout << x << endl;
    cout << (char) 100 << endl;

    int correct = 8;
    int questions = 10;
    double score = correct /(double)questions * 100;

    cout << score << "%" << endl;


    return 0;
}