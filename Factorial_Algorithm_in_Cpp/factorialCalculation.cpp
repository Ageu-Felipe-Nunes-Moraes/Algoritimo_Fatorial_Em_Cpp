//Code in c++
//The result supports up to 64 bits

#include <iostream> // C++ input and output module

class FatorialCalculate{
private:
    int factorial; // Will receive number entered by the user
    unsigned long long int result = 1; // Counter that will store the result

public:
    
    int get_value(){ // to get value entered by the user
        
        std::cout << "Digite um valor para descobrir o fatorial do mesmo: ";
        std::cin >> factorial;
        return factorial;
    }

   void checks_conditions(){ // Checks the necessary conditions to have a factorial
        

        if (factorial < 0){ // If you enter negative value, it will show this message
            std::cout << "Valor negativo, portanto invalido." << std::endl;
        } else{
            print_result(); // Otherwise, the code will call the logic implementation and the result
        }
    }

    void print_result(){ // Processes entered value and delivers the result
        // While i <= factorial, it will be multiplied by the "Result" variable
        // EXEMPLE: 5! = 1*1 = 1*2 = 2*3 = 6*4 = 24 * 5 = 120
        for (int i = 1; i <= factorial; i++){
            result *= i;
        }
        std:: cout << "O resultado de " << factorial << " em fatorial e: " << result << std::endl; // Final result
    }
};


int main(){
    FatorialCalculate calculator; // Object 1
    calculator.get_value(); // To get user value
    calculator.checks_conditions(); // Checks if the entered value is valid
    return 0; // Returning 0 to main, to check if everything is ok
}
