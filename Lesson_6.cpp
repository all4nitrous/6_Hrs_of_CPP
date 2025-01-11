/* Lesson on Arithmetic operators */
#include  <iostream>

int main() {

    using namespace std;

    int students = 20;

    double learners = 20;

    int remainder = students % 3;


/* Possible variables

    students = students + 1;

    students += 1; // Can do multiple increments

    students++; // single increment

    students--;

    students -=2;

    students *=2;

    students /= 2;

*/

    learners /= 3;

    cout << students << endl;
    cout << learners << endl;
    cout << remainder << endl;

    return 0;
}