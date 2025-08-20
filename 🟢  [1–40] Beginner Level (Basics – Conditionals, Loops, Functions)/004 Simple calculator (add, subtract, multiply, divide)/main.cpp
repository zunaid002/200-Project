#include <iostream>

int math(int &choice, int &number1, int &number2);
void firstChoice();
void secondChoice();
int mathInput(int &choice);

int main() {

    firstChoice();

    return 0;
}


void firstChoice() {
    int choice {};
    
    //menu
    std::cout << "1. Add\n" << "2. Subtract\n" << "3. Multiply\n" << "4. Devide" << std::endl;
    
    //taking users choice
    do{
        std::cout << "Choose a function: ";
        std::cin >> choice;
    } while(choice < 0 || choice > 4);
    
    mathInput(choice);
}

void secondChoice() {

    int choice {};

    do{
        std::cout << "Continuing to do more? \n" << "1.Yes\n" << "2. Exit" << std::endl;
        std::cin >> choice;
    }while(choice != 1 && choice != 2);


    if (choice == 1){
        do{
            std::cout << "1.With result\n" << "2.New Calculation" << std::endl;
            std::cin >> choice;
        }while(choice != 1 && choice != 2);

        if(choice == 2) {
            firstChoice();
        }
    }
     else{
        return;
    }


}

int mathInput(int &choice) {
    
    int number1 {};
    int number2 {};

    std::cout << "First number: ";
    std::cin >> number1;

    std::cout << "Second number: ";
    std::cin >> number2;

    number1 = math(choice, number1, number2);
    

    return 0;
}





int math(int &choice, int &number1, int &number2) {
    int result;
    switch(choice){
        case 1: {
            result = number1 + number2;
            std::cout << number1 << " + " << number2 << " = " << result << std::endl;
            secondChoice();
        }
        case 2: {
            result = number1 - number2;
            std::cout << number1 << " - " << number2 << " = " << result << std::endl;
            secondChoice();
        }
        case 3: {
            result = number1 * number2;
            std::cout << number1 << " X " << number2 << " = " << result << std::endl;
            secondChoice();
        }
        case 4 : {
            result = number1 / number2;
            std::cout << number1 << " / " << number2 << " = " << result << std::endl;
            secondChoice();
        }
    }

    return result;
}