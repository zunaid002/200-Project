//finished and working
#include <iostream>

int main() {

    //completed project
    //Fully functioning

    bool newCalculation {true};      // flag: true = start fresh, false = continue with old result
    bool loopCondition {true};       // main Loop control
    int choice {};                   // user manu choice
    int number1 {};                  // first number (or resued result)
    int number2 {};                  // second number 
    int result {};                   // calculation result

    // =======================================
    // Main program Loop
    // Keep running until user choose to exit
    // =======================================
    while(loopCondition) {

        //----------- Step 1: Show menu --------------------------
        std::cout << "1. Add\n" 
                  << "2. Subtract\n" 
                  << "3. Multiply\n" 
                  << "4. Devide" << std::endl;
    
        
        //---------- Step 2: Get operation choice ---------------
        do{
            std::cout << "Choose a function: ";
            std::cin >> choice;
        } while(choice < 0 || choice > 4);


        //---------- Step 3: Get numbers -------------------------
        if(newCalculation == true) {
            //if it's a fresh calculation, ask for the first number
            std::cout << "First number: ";
            std::cin >> number1;
        }
        // Always ask for the second number
        std::cout << "Second number: ";
        std::cin >> number2;


        //----------- Step 4: Perfort Calculation ----------------
        switch(choice){
            case 1: {
                result = number1 + number2;
                std::cout << number1 << " + " << number2 << " = " << result << std::endl;
                break;
            }
            case 2: {
                result = number1 - number2;
                std::cout << number1 << " - " << number2 << " = " << result << std::endl;
                break;
            }
            case 3: {
                result = number1 * number2;
                std::cout << number1 << " X " << number2 << " = " << result << std::endl;
                break;
            }
            case 4 : {
                result = number1 / number2;
                std::cout << number1 << " / " << number2 << " = " << result << std::endl;
                break;
            }
        }

        // Update first number with result so user can continue
        // with previous calculation
        number1 = result;


        //------------- Step 5: Ask if user wants to continue ------------
        do{
            std::cout << "Continuing to do more? \n" << "1.Yes\n" << "2. Exit" << std::endl;
            std::cin >> choice;
        }while(choice != 1 && choice != 2);

        if(choice == 2) {
            break;  // Exit program
        }



        //------------- Step 6: Ask whether to start freash or reuse old result ----------
        do{
            std::cout << "1. New Calculation \n" << "2. Old Calculation" << std::endl;
            std::cin >> choice;
        }while(choice != 1 && choice != 2);

        
        if(choice == 2){
            newCalculation = false;
            continue;
        }
        newCalculation = true;

    }



}
