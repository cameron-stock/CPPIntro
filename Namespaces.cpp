#include <iostream>

// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as a the namespaces are different.


namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


int main() {

    int x = 0;

// Calling the 'first' namespace for variable 'x'
// No namespace called will use whatever is in 'int'
    std::cout << first::x;

    return 0;

}