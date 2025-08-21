#include <iostream>
#include <cmath>

int main() {
    int number {};
    int power{};

    std::cout << "Number: ";
    std::cin >> number;
    std::cout << "Power: ";
    std::cin >> power;


    std::cout << number << " reaised to the power " << power << " is " << pow(number, power);
    return 0;
}