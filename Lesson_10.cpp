/* Hypotenuse Calculator Program */

#include <iostream>
#include <cmath>

int main() {

    using namespace std;

    double a;
    double b;
    double c;

    cout << "Enter side A: " << endl;
    cin >> a;

    cout << "Enter side B: " << endl;
    cin >> b;

    // a = pow(a, 2);
    // b = pow(b, 2);
    // c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "Side C: " << c << endl;


    return 0;
}