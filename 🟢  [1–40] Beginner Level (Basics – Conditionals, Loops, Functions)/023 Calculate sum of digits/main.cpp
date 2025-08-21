#include <iostream>

int main(){
    int N {};
    int sum {};

    std::cout << "Enter the number: ";
    std::cin >> N;

    while(N != 0){
        sum += N % 10;
        N /= 10;
    }


    std::cout << sum << std::endl;

    return 0;
}