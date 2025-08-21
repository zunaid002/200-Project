#include <iostream>

int main(){
    bool freash {true};
    double firstNumber {};
    double secondNumber {};
    double result {};

//===================================================
//--------------- loop ------------------------------
//---------- Run untill user choose to exit ---------
//===================================================
    while(true){
        int choice {};
    
     //---------- Step 1: Asking for choice operation ------------
        do{
            std::cout << "1. add\n"
                      << "2. subtract\n"
                      << "3. multiply\n"
                      << "4. devide" << std::endl;
            std::cin >> choice;
        }while(choice < 1 || choice > 4);

        //--------- Step: 2: User input --------------------------------------
        //--------- Asking for first number. if the calculation is freash -----------
        if(freash){
            std::cout << "First number: ";
            std::cin >> firstNumber;
        }

        //---------- Always ask second number----------------
        std::cout << "Second number: ";
        std::cin >> secondNumber;

        //------------Step 3: Math operation ---------------
        switch(choice){
            case 1:{
                result = firstNumber + secondNumber;
                std::cout << firstNumber << " + " << secondNumber << " = " << result << std::endl;
                break;
            }
            case 2:{
                result = firstNumber - secondNumber;
                std::cout << firstNumber << " - " << secondNumber << " = " << result << std::endl;
                break;
            }
            case 3:{
                result = firstNumber * secondNumber;
                std::cout << firstNumber << " X " << secondNumber << " = " << result << std::endl;
                break;
            }
            case 4:{
                result = firstNumber + secondNumber;
                std::cout << firstNumber << " / " << secondNumber << " = " << result << std::endl;
            }

        }

        // ---------------- to continue calculation with old result -----------------------
        firstNumber = result;

        // ---------------- sking user continue or exit -------------
        do{
            std::cout << "1. Continue\n"
                      << "2. Exit"<< std::endl;
            std::cin >> choice;
        }while(choice < 1 || choice > 2);

        if(choice == 2){
            break;                  //Exit
        }

        // --------------- Want a freash calculation or continue with old result ----------------
        do{
            std::cout << "1. New calculation\n"
                      << "2. With old result"<< std::endl;
            std::cin >> choice;
        }while(choice < 1 || choice > 2);

        //----------- so first number wont be taken in the next loop ---------
        if(choice == 2){
            freash = false; 
            continue;
        }

        freash = true;



    }

    return 0;
}