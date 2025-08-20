#include <iostream>

int factorial(long long number);

int main() {
    long long number {};

    std::cout << "Enter Your Number: ";
    

    while(true){
        std::cin >> number;
        if(number >= 0){
            break;
        }
        std::cout << "Please give a positive number: ";
    }

    std::cout << "Factorial of "<< number << " is " << factorial(number) << std::endl;

    return 0;
}

int factorial(long long number) {

    if(number == 0 || number == 1) {
        return 1;
    }
    return number * factorial(number - 1);

}