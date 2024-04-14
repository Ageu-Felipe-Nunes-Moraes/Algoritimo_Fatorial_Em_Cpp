//Código em c++
//O resultado suportará tamanho de até 64 bits

#include <iostream>

class CalculaFatorial{
private:
    int fatorial;
    unsigned long long int resultado = 1;

public:  
    
    int get_valor(){
        
        std::cout << "Digite um valor para descobrir o fatorial do mesmo: ";
        std::cin >> fatorial;
        return fatorial;
    }

   void verifica_condicoes(){
        

        if (fatorial < 0){
            std::cout << "Valor negativo, portanto invalido." << std::endl;
        } else{
            imprime_resultado();
        }
    }

    void imprime_resultado(){
        
        for (int i = 1; i <= fatorial; i++){
            resultado *= i;
        }
        std:: cout << "O resultado de " << fatorial << " em fatorial e: " << resultado << std::endl;
    }
};


int main(){
    CalculaFatorial calculo_teste;
    calculo_teste.get_valor();
    calculo_teste.verifica_condicoes();
    return 0;
}
