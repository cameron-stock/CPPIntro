#include <iostream>
#include <vector>


// typedef std::string text_t;
using text_t = std::string;
using number_t = int;

int main(){

    // Typedef - reserved keyword used to create an additional name
    //          for another data type. New identifier for an existing
    //          type to help with readability and reduce typos.
    //          itll end with '_t'
    //          "typedef" is not replaced with 'using'

    text_t firstName = "Cam";
    number_t age = 31;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}