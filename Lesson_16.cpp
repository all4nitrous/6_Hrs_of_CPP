/* Temperature Conversion Program */
#include <iostream>

using namespace std;

int main() {

    double temp;
    char unit;

    cout << "***** Temperature Conversion *****" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "C = Celcius" << endl;
    cout << "What unit would you like to convert to: " << endl;
    cin >> unit;

    if(unit == 'F' || unit == 'f') {
        cout << "Enter the temperature in Celcius: " << endl;
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "temperature is: " << temp << "F" << endl;
    }
    else if(unit == 'C' || unit == 'c') {
        cout << "Enter the temperature in Fahrenheit: " << endl;
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "temperature is: " << temp << "C" << endl;
    }
    else {
        cout << "Please enter in only C or F" << endl;
    }
    
     
    
    cout << "**********************************" << endl;

    return 0;
}