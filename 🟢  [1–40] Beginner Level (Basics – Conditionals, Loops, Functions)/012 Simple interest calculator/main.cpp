#include <iostream>

int main() {
    double amount {};
    double rate {};
    int time {};

    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter Rate of interest per year (in %): ";
    std::cin >> rate;
    std::cout << "Enter Time period (in years): ";
    std::cin >> time;

    std::cout << (amount * rate * time) / 100 << std::endl;

    return 0;
}