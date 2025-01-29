/* Console Calculator Program */
#include <iostream>

int main() {

    using namespace std;

    char op;
    double num1;
    double num2;
    double result;

    cout << "******** Calculator ***********" << endl;

    cout << "Enter 1: " << endl;
    cin >> num1;

    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter 2: " << endl;
    cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "result: " << result << endl;
            break;


        case '-':
            result = num1 - num2;
            cout << "result: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "result: " << result << endl;
            break;

        case '/':
            result = num1 / num2;
            cout << "result: " << result << endl;
            break;
        
        default:
            cout << "That wasn't a valid response" << endl;
    }

    cout << "*******************************" << endl;



    return 0;
}