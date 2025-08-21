#include <iostream>
#include <string>

int main() {

    int number {};

    std::cout << "Enter a number: ";
    std::cin >> number;

    std::string a {std::to_string(number)};

    for(int i = a.length() - 1; i >= 0; i--){
        std::cout << a[i];
    }


    return 0;
}