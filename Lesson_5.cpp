/* Lesson on namespaces*/
#include <iostream>

namespace first {
        int x = 1;
    }
namespace second {
        int x = 2;
    }


int main() {


    std::cout << first::x << "\n";
    // std::cout << second::x;


    return 0;
}