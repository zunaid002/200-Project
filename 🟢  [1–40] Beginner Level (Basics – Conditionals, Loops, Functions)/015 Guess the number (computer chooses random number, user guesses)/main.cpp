#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution distr(1, 20);

    int number {distr(gen)};
    int choice {};
    int life {5};


    for(int i = 1; i <= life; i++){
        std::cout << "Life: " << life + 1 - i << std::endl;
        std::cout << "Guess The number between 1 - 20" << std::endl;
        std::cin >> choice;

        if(choice == number){
            std::cout << "You win" << std::endl;
            return 0;
        }
    }

    std::cout << "You lose" << std::endl;

    return 0;
}