#include <iostream>

int main() {
    int mark {};

    do{
        std::cout << "Enter your mark: ";
        std::cin >> mark;
    }while(mark < 0 || mark > 100);


    if(mark >= 80){
        std::cout << "Latter Grade: A+\n"
                  << "Gread Point: 4.00" << std::endl;
    }else if(mark >= 75){
        std::cout << "Latter Grade: A\n"
                  << "Gread Point: 3.75" << std::endl;
    }else if(mark >= 70){
        std::cout << "Latter Grade: A-\n"
                  << "Gread Point: 3.50" << std::endl;
    }else if(mark >= 65){
        std::cout << "Latter Grade: B+\n"
                  << "Gread Point: 3.25" << std::endl;
    }else if(mark >= 60){
        std::cout << "Latter Grade: B\n"
                  << "Gread Point: 3.00" << std::endl;
    }else if(mark >= 55){
        std::cout << "Latter Grade: B-\n"
                  << "Gread Point: 2.75" << std::endl;
    }else if(mark >= 50){
        std::cout << "Latter Grade: C+\n"
                  << "Gread Point: 2.50" << std::endl;
    }else if(mark >= 45){
        std::cout << "Latter Grade: C\n"
                  << "Gread Point: 2.25" << std::endl;
    }else if(mark >= 40){
        std::cout << "Latter Grade: D\n"
                  << "Gread Point: 2.00" << std::endl;
    }else{
        std::cout << "Latter Grade: F\n"
                  << "Gread Point: 0.00" << std::endl;
    }


    return 0;
}