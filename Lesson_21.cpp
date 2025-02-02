/* Break and Continue */
#include <iostream>

using namespace std;

int main() {

    for(int i = 1; i <= 20; i++)  {

        if( i==13 )
           // break; will end sequence at 12
            continue; // will skip 13
        cout << i << endl;
    }


    return 0;
}