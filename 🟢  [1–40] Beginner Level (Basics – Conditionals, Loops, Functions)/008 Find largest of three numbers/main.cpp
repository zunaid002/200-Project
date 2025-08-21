#include <iostream>

int main() {

    int a {};
    int b {};
    int c {};

    std::cout << "Enter The first number: ";
    std::cin >> a;
    std::cout << "Enter The second number: ";
    std::cin >> b;
    std::cout << "Enter The third number: ";
    std::cin >> c;

    if(a >= b && a >= c){
        std::cout << a << " is the largest number." << std::endl;
    } else if(b >= a && b >= c) {
        std::cout << b << " is the largest number." << std::endl;
    } else{
        std::cout << c << " is the largest number." << std::endl;
    }

    return 0;
}