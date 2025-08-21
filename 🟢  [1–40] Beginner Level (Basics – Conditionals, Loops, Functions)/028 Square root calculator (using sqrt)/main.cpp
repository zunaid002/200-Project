#include <iostream>
#include <cmath>

int main() {
    int number {};

    std::cout << "Number: ";
    std::cin >> number;

    std::cout << "square root of " << number << " is " << std::sqrt(number);
    return 0;
}