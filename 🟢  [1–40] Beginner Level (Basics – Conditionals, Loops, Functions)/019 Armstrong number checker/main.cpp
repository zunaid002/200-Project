#include <iostream>
#include <string>
#include <cmath>

int main(){
    long int number {};
    long int sum {};
    int length {};

    std::cout << "Enter a number: ";
    std::cin >> number;

    length = std::to_string(number).length();

    long n {number};
    while(n != 0){
        int digit = n % 10;
        sum = sum + pow(digit, length);
        n /= 10;
    }
    
    if(sum == number){
        std::cout << "Armstrong number.";
        return 0;
    }

    std::cout << "Not a Armstrong number.";

    return 0;
}