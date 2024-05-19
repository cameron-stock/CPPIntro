#include <iostream>

int main() {

    // The 'Const' keyword specifies that a variable's value is constant
    // and tells the compiler to prevent anything from modifying it
    // (read only)
    // Best practice is to use all caps for variable name for Const "PI"

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm";

    return 0;

}