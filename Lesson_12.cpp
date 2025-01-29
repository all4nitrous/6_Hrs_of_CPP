/* Lesson on Switch Statements */
#include <iostream>

int main() {

    using namespace std;

    int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch(month) {

        case 1:
        cout << "It is January" << endl;
        break;


        case 2:
        cout << "It is Febuary" << endl;
        break;

        case 3:
        cout << "It is march" << endl;
        break;

        case 4:
        cout << "It is April" << endl;
        break;

        case 5:
        cout << "It is May" << endl;
        break;

        case 6:
        cout << "It is June" << endl;
        break;

        case 7:
        cout << "It is July" << endl;
        break;

        case 8:
        cout << "It is August" << endl;
        break;

        case 9:
        cout << "It is September" << endl;
        break;

        case 10:
        cout << "It is October" << endl;
        break;

        case 11:
        cout << "It is Novemeber" << endl;
        break;

        case 12:
        cout << "It is December" << endl;
        break;
    default:
        cout << "Please enter in only numbers 1-12" << endl;



    }

    return 0;
}