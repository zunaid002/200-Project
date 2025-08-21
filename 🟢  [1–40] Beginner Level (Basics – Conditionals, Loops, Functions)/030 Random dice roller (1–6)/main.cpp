#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 6);

    std::cout << distr(gen);

    return 0;
}