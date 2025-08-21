#include <iostream>

int main() {
    int N {};
    int sum {};

    std::cout << "Give a number: ";
    std::cin >> N;

    for(int i = 1; i <= N; i++){
        sum += i;
    }

    std::cout << "Sum of " << N << " natural numbers is " << sum << std::endl;

    return 0;
}