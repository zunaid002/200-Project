#include <iostream>

int main(){
    int number {};
    int reversed {};

    std::cout << "Enter a number: ";
    std::cin >> number;

    int n = number;

    while(n != 0){
        reversed = reversed * 10 + n % 10;

        n /= 10;
    }

    std::cout << reversed << std::endl;


    return 0;
}






/*
n % 10 → gives the last digit of n.
Example: if n = 1234, then n % 10 = 4.

reversed = reversed * 10 + n % 10

First iteration: reversed = 0 * 10 + 4 = 4

Second iteration: n becomes 123 → last digit 3 → reversed = 4 * 10 + 3 = 43

Third iteration: n = 12 → last digit 2 → reversed = 43 * 10 + 2 = 432

Fourth iteration: n = 1 → last digit 1 → reversed = 432 * 10 + 1 = 4321

n /= 10 → removes the last digit from n.
Example: 1234 / 10 = 123

Loop repeats until n becomes 0.

*/