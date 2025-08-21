#include <iostream>

int main(){
    int number1 = 12;
    int number2 = 34;
    int temp = {};

    temp = number1;
    number1 = number2;
    number2 = temp;

    std::cout << "first number: " << number1 << std::endl;
    std::cout << "second number: " << number2 << std::endl;
    

    number1 = 12;
    number2 = 34;

    /*
    number1 = A, number2 = B
    1. number1 = number1 ^ number2
       Now number1 = A ^ B
    2. number2 = number1 ^ number2
       number2 = (A ^ B) ^ B = A
    3. number1 = number1 ^ number2
       number1 = (A ^ B) ^ A = B
    */

    //without temp veriable
    number1 = number1 ^ number2;
    number2 = number1 ^ number2;
    number1 = number1 ^ number2;
    
    
    std::cout << "first number: " << number1 << std::endl;
    std::cout << "second number: " << number2 << std::endl;




    return 0;
}