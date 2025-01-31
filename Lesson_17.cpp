/* Lesson on string methods */
#include <iostream>

using namespace std;

int main() {

    string name;

    cout << "Enter your name: " << endl;
    getline(cin, name);

    cout << name.at(0) << endl;
   
    // name.append("@gmail.com");
    
     // name.clear();
   
    /* if(name.empty()) {

        cout << "You didn't enter your name" << endl;
    } */

    /*if(name.length() > 12) {
        cout << "Your name can't be over 12 characters" << endl;
    } */

       //  cout << "Your username is now " << name << endl;

    return 0;
}