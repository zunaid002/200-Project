#include <iostream>

int main() {

    int N {};
    int a {};
    int b {1};
    int temp {};

    std::cout << "Number of sequence: ";
    std::cin >> N;

    for(int i = 0; i < N; i++){
        if(i == 0){
            std::cout << a << " ";
        } else if(i == 1){
            std::cout << b << " ";
        } else{
            temp = a + b;
            std::cout << temp << " ";
            a = b;
            b = temp;
        }
        
        

    }

    


    return 0;
}