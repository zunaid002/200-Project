#include <iostream>
#include <cmath>
void prime(const int number);

int main(){
    int number {};

    std::cout << "Enter your number: ";

    std::cin >> number;

    prime(number);
    
    return 0;
}


void prime(const int number){

    //------------ Step 1: Check for negative number --------------
    //------------ Even number and hard coded for 2 and 3 --------- 

    if(number <= 1){
        std::cout << number << " is not a prime number." << std::endl;
        return;
    }
    if(number == 2 || number == 3){
        std::cout << number << " is a prime number." << std::endl;
        return;
    }
    if(number % 2 == 0){
        std::cout << number << " is not a prime number." << std::endl;
        return;
    }

    //------------- Step 2: dividing by all number smaller than --------
    //-------------         squir root of given number N = a * a    --------

    for(int i = 3; i * i <= number; i++){
        if(number % i == 0){
            std::cout << number << " is not a prime number." << std::endl;
            return;
        }
    }

    std::cout << number << " is a prime number." << std::endl;


}