#include <iostream>

int main(){

    std::string userName {};
    std::string password {};

    std::string correctUsername {"admin345"};
    std::string correctPassord {"3462"};

    std::cout << "Enter Username: ";
    std::cin >> userName;

    std::cout << "Enter Password: ";
    std::cin >> password;


    if(userName == correctUsername && password == correctPassord){
        std::cout << "Long in successfull." << std::endl;
    }
    else{
        std::cout << "Invalid username or password" << std::endl;
    }


}