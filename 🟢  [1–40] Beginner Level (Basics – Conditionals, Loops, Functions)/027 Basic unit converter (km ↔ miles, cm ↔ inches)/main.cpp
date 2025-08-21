#include <iostream>

int main() {
    int choice {};

    std::cout << "1. km <-> miles\n"
              << "2. cm <-> inches" << std::endl;
    std::cin >> choice;

    switch(choice){
        case 1: {
            std::cout << "1. km -> miles\n"
                      << "2. miles -> km" << std::endl;
            std::cin >> choice;
            if(choice == 1){
                double km {};
                std::cout << "km: ";
                std::cin >> km;

                std::cout << km << " is " << km * 0.621371 << " mile";
                break;
            }
            double mile {};
            std::cout << "mile: ";
            std::cin >> mile;
            std::cout << mile * 1.60934;
            break;

        }
        case 2: {
            std::cout << "1. cm -> inches\n"
                      << "2. inches -> cm" << std::endl;
            std::cin >> choice;
            if(choice == 1){
                double cm {};
                std::cout << "cm: ";
                std::cin >> cm;
                std::cout << cm * 0.393701;
                break;
            }

            double inch {};
            std::cout << "inch: ";
            std::cin >> inch;
            std::cout << inch * 2.54;
        }
    }

    return 0;
}