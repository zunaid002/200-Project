#include <iostream>

int main(){
    int firstNumber {};
    int secondNumber {};
    int GCD {};
    int LCM {};

    // Asking for input
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;


    //-------------Step 1: GCD -----------------------------
    // finding smaller number. so i can loop based on it (less loop)
    int limit = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    
    for(int i = 1; i <= limit; i++){
        if(firstNumber % i == 0 && secondNumber % i == 0){
            GCD = i;
        }
    }
    std::cout << "GCD of " << firstNumber << " and " << secondNumber << " : " << GCD << std::endl;


    // ------------- Step 2: LCM ----------------------
    int greater = (firstNumber > secondNumber) ? firstNumber : secondNumber;
    int smaller = (firstNumber < secondNumber) ? firstNumber : secondNumber;
    for(int i = 1; i <= greater; i++){

        if((greater * i) % smaller == 0){
            LCM = greater * i;
            break;
        }
    }

    std::cout << "LCM of " << firstNumber << " and " << secondNumber << " : " << LCM << std::endl;

    return 0;
}