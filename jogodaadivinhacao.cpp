#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "***************************************\n";
    cout << "* Boas vindas ao Jogo da Adivinhação! *\n";
    cout << "***************************************\n";
    
    const int NUMERO_SECRETO = 42;
    int chute;    
    int tentativas = 0;
    bool nao_acertou = true;
    double pontos = 1000.0;

    

    while (nao_acertou)
    { 
        tentativas++;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual é o seu chute?\n";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;
    
        if (acertou){
            cout << "Você acertou o número secreto\n";
            nao_acertou = false;
        }
        else if (maior){
            cout << "Seu chute é maior que o número secreto\n";            
        }
        else{
            cout << "Seu chute é menor que o número secreto\n";            
        }       
        
    }
    cout << "Fim de Jogo\n";
    cout << "Você acertou o numero secreto em  " << tentativas << " tentativas\n";
    cout.precision(2);
    cout << fixed;
    cout << "Sua Pontuação foi: " << pontos << endl;
    
    return 0;
}
