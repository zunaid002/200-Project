#include <iostream>


int main(){
    char c {};

    std::cout << "Enter a character: ";
    std::cin >> c;

    std::cout << "ASCII values of " << c << " is " << static_cast<int>(c) << std::endl;

    return 0;
}