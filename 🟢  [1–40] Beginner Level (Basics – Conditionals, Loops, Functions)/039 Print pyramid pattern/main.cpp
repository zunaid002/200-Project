#include <iostream>

//================= Explanation =========================
// 2 things happen
// 1. space decrease from top to bottom
// 2. star increase from top to bottom
//=======================================================


// we have variable to represent these
//=======================================================
// in First we have variable i and a constant height
// ======> the difference from 0 to i increase 
// ======> the difference from i to height decrease
// we can use these to tackle the 2 things.
//=======================================================

int main(){
    int height {};

    std::cout << "Enter height: ";
    std::cin >> height;

    for(int i = 0; i < height; i++){

        for(int j = 0; j < height - i; j++){
            std::cout << " ";
        }
        for(int j = 0; j < i * 2 + 1; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}