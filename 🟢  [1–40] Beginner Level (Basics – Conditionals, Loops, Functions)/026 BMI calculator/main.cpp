#include <iostream>

int main() {
    float height {};
    float weight {};

    std::cout << "Height(m): ";
    std::cin >> height;
    std::cout << "Weight(kg): ";
    std::cin >> weight;

    std::cout << "BMI: " << weight / (height * height) << std::endl;

    return 0;
}