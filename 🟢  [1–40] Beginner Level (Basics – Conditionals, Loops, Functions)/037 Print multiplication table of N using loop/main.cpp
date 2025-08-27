#include <iostream>

int main(){
    int N {};

    std::cout << "Give a number: ";
    std::cin >> N;

    for(int i = 1; i <= 10; i++){
        std::cout << N << " X " << i << " = " << N * i << std::endl;
    }

    return 0;
}