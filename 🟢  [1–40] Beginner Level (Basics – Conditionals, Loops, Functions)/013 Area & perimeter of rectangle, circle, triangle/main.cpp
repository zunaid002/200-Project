#include <iostream>
#include <cmath>

int main() {
    int choice {};

    //rectangle
    double length {};
    double width {};

    //circle
    double radius {};
    const double pi {3.14159};

    //triangle
    double a {};
    double b {};
    double c {};

    std::cout << "1. Rectangle\n"
              << "2. Circle\n"
              << "3. Triangle\n";

    std::cin >> choice;

    switch(choice){
        case 1: {
            std::cout << "Enter Length: ";
            std::cin >> length;
            std::cout << "Enter Width: ";
            std::cin >> width;

            std::cout << "Area: " << length * width
                      << "\nPerimeter: " << 2 * (length + width) << std::endl;
            break;
        }
        case 2: {
            std::cout << "Enter Radius: ";
            std::cin >> radius;
            std::cout << "Area: " << pi * radius * radius
                      << "\nPerimeter: " << 2 * pi * radius << std::endl;
            break;
        }
        case 3: {
            std::cout << "Enter side 1: ";
            std::cin >> a;
            std::cout << "Enter side 2: ";
            std::cin >> b;
            std::cout << "Enter side 3: ";
            std::cin >> c;

            double s = (a + b + c) / 2;

            std::cout << "Area: " << sqrt(s * ( s - a ) * ( s - b ) * ( s - c ))
                      << "\nPerimeter: " << a + b + c << std::endl;
            break;
        }
    }

    return 0;
}