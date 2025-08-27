#include <iostream>

int main(){
    int width {};
    int height {};

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;


    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(i == 0 || i == height - 1 || j == 0 || j == width - 1){
                std::cout << "*";
            } else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}