#include <iostream>

int main() {

    std::string name {};
    int age {};

    std::cout << "Please Enter Your Name: ";
    std::cin >> name ;

    do {
        std::cout << "Please Enter Your age: ";
        std::cin >> age ;
    }while(age < 0);
    



    if(0 < age && age < 18){
        std::cout << name << " You are under Aged." << std::endl;
    } else if(18 < age) {
        std::cout << "Welcome!!, " << name << "." << std::endl;
    }



    return 0;
}