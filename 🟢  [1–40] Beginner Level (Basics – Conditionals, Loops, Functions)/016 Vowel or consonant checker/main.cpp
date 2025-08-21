#include <iostream>
#include <cctype>

int main() {
    char a {};

    std::cout << "Enter a character: ";
    std::cin >> a;

    char aLower {static_cast<char>(tolower(a))};

    if(aLower == 'a'|| aLower == 'e' || aLower == 'i'|| aLower == 'o'|| aLower == 'u'){
        std::cout << "Given character is a vowel." << std::endl;
        return 0;
    }
    
    std::cout << "Given character is a consonant." << std::endl;


    return 0;
}