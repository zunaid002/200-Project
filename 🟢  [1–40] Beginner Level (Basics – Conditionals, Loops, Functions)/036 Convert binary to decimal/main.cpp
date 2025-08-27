#include <iostream>
#include <string>
#include <cmath>

int main() {

    std::string binary {};
    int decimal {};

    std::cout << "Enter a binary number: ";
    std::cin >> binary;

    int power {static_cast<int>(binary.length()) - 1};


    for(int i = 0; i < binary.length(); i++){
        if(binary[i] == '1'){
            decimal += std::pow(2, power);
        }
        power--;
    }


    std::cout << decimal << std::endl;

    return 0;
}