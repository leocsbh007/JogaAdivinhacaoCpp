#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "***************************************\n";
    cout << "* Boas vindas ao Jogo da Adivinha��o! *\n";
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
        cout << "Qual � o seu chute?\n";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;
        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;
    
        if (acertou){
            cout << "Voc� acertou o n�mero secreto\n";
            nao_acertou = false;
        }
        else if (maior){
            cout << "Seu chute � maior que o n�mero secreto\n";            
        }
        else{
            cout << "Seu chute � menor que o n�mero secreto\n";            
        }       
        
    }
    cout << "Fim de Jogo\n";
    cout << "Voc� acertou o numero secreto em  " << tentativas << " tentativas\n";
    cout.precision(2);
    cout << fixed;
    cout << "Sua Pontua��o foi: " << pontos << endl;
    
    return 0;
}
