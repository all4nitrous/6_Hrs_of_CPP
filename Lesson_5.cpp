/* Lesson on namespaces*/
#include <iostream>

namespace first {
        int x = 1;
    }
namespace second {
        int x = 2;
    }


int main() {

    using namespace std; // Using this allows you to omit std

    cout << first::x << "\n";
    // std::cout << second::x;
    string name = "Bro";

    cout << "Hello " << name << endl;

    return 0;
}