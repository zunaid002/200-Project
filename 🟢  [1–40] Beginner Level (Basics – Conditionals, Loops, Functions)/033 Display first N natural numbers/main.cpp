#include <iostream>

int main() {
    int N {};

    std::cout << "Give a number: ";
    std::cin >> N;

    for(int i = 1; i <= N; i++){
        std::cout << i << std::endl;
    }

    return 0;
}