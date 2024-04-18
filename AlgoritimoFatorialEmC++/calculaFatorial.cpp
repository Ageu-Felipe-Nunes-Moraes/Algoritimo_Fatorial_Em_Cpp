//Código em c++
//O resultado suportará tamanho de até 64 bits

#include <iostream> // Biblioteca de entra e saída do c++

class CalculaFatorial{
private:
    int fatorial; // Vai receber o número dado pelo usuário
    unsigned long long int resultado = 1; // Variável contadora que consegue armazenar resultados extensos

public:
    
    int get_valor(){ // Captura o valor dado pelo usuário
        
        std::cout << "Digite um valor para descobrir o fatorial do mesmo: ";
        std::cin >> fatorial;
        return fatorial;
    }

   void verifica_condicoes(){ // Verifica a condição necessária para ser considerado fatorial 
        

        if (fatorial < 0){ // Se um valor negativo for inserido, vai aparecer essa mensagem
            std::cout << "Valor negativo, portanto invalido." << std::endl;
        } else{
            imprime_resultado(); // Se não, o código chama a implementação da lógica e resultado
        }
    }

    void imprime_resultado(){ // Processa o valor inserido e entrega o resultado
        // Enquanto i <= fatorial ele será múltiplicado com a variável "Resultado"
        // EXEMPLO: 5! = 1*1 = 1*2 = 2*3 = 6*4 = 24 * 5 = 120
        for (int i = 1; i <= fatorial; i++){
            resultado *= i;
        }
        std:: cout << "O resultado de " << fatorial << " em fatorial e: " << resultado << std::endl; // Resultado final
    }
};


int main(){
    CalculaFatorial calculo_teste; // Objeto 1
    calculo_teste.get_valor(); // Capturando valor do usuário
    calculo_teste.verifica_condicoes(); // Verificando se o valor inserido é válido
    return 0; // Retornando 0 para o main, a fim de verificar se ocorreu tudo bem
}
