#include <iostream>
#include <string>

int main(){
    int decimal {};
    std::string binary {};

    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    int n = decimal;

    if(decimal == 0) binary = "0";

    while(n > 0){
        binary = std::to_string(n % 2) + binary;

        n /= 2;
    }



    std::cout << decimal << " to binary is " << binary << std::endl;


    return 0;
}