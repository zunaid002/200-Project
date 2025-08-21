#include <iostream>

int main(){
    char c {};
    int choice {};

    std::cout << "1. Upper to lower.\n"
              << "2. Lower to Upper." << std::endl;
    std::cin >> choice;

    switch(choice){
        case 1: {
            std::cout << "Enter a upper case character: ";
            std::cin >> c;

            int a = c + 32;

            std::cout << static_cast<char>(a);
            break;
        }
        case 2: {
            std::cout << "Enter a lower case character: ";
            std::cin >> c;

            int a = c - 32;

            std::cout << static_cast<char>(a);
        }
    
    }

    


    return 0;
}