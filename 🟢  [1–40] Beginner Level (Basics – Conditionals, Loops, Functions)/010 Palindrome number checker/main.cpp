#include <iostream>
#include <string>

int main() {

    long long int number {};
    

    std::cout << "Enter your number: ";
    std::cin >> number;

    std::string numberToString {std::to_string(number)};

    int length = numberToString.length();


    for(int i = 0; i < length/2; i++){

        if(numberToString[i] != numberToString[length - (i+1)]){
            std::cout << numberToString << " not a Palindrome." << std::endl;
            return 0;
        }
    }

    std::cout << numberToString << " is a Palindrome." << std::endl;

    return 0;
}