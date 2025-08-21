#include <iostream>

int main() {

    int number {};

    do{
        std::cout << "Enter the day number(1-7): ";
        std::cin >> number;
    }while(number < 0 || number > 7);

    switch(number) {
        case 1:{
            std::cout << "Sunday" << std::endl;
            break;
        }
        case 2:{
            std::cout << "Monday" << std::endl;
            break;
        }
        case 3:{
            std::cout << "Tuesday" << std::endl;
            break;
        }
        case 4:{
            std::cout << "Wednesday" << std::endl;
            break;
        }
        case 5:{
            std::cout << "Thursday" << std::endl;
            break;
        }
        case 6:{
            std::cout << "Friday" << std::endl;
            break;
        }
        case 7:{
            std::cout << "Saturday" << std::endl;
            break;
        }
    }

    return 0;
}