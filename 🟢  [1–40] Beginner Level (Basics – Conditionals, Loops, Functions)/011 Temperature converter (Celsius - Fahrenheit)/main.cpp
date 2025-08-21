#include <iostream>

int main() {
    double temperature {};
    unsigned short int choice{};

    std::cout << "1. Celsius to Fahrenheit\n"
              << "2. Fahrenheit to Celsius" << std::endl;
            
    std::cin >> choice;

    switch(choice){
        case 1: {
            std::cout << "Enter Celsius: ";
            std::cin >> temperature;

            std::cout << temperature << " is " << (temperature * 9.0 /5.0) + 32 << " in Fahrenheit." << std::endl;
            break;
        }
        case 2: {
            std::cout << "Enter Fahrenheit: ";
            std::cin >> temperature;

            std::cout << temperature << " is " << (temperature - 32) * (5.0 / 9.0) << " in Celsius." << std::endl;
            break;
        }
    }

    return 0;
}