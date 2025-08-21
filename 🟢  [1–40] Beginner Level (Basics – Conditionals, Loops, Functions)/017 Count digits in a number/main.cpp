#include <iostream>
#include <string>

int main(){
    int number {};

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << std::to_string(number).length();

    return 0;
}