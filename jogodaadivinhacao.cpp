#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "***************************************\n";
    cout << "* Boas vindas ao Jogo da Adivinha��o! *\n";
    cout << "***************************************\n";

    cout << "Escolha o n�mero de tentativas\n";
    cout << "F�cil (F), M�dio (M), D�ficil (D): ";

    char dificuldade;
    int numero_tentativas;

    cin >> dificuldade;

    if (dificuldade == 'F'){
        numero_tentativas = 15;
    }
    else if (dificuldade == 'M'){
        numero_tentativas = 10;
    }
    else if(dificuldade == 'D'){
        numero_tentativas = 5;
    }
    else{
        cout << "Essa op��o n�o existe e por default o numero de tentativas � 5\n";
        numero_tentativas = 5;
    }
    
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100; // Vai trazer um numero entre 0 e 99
    int chute;    
    int tentativas = 0;
    bool nao_acertou = true;
    double pontos = 1000.0;

    

    for(tentativas = 1; tentativas <= numero_tentativas; tentativas++)
    {         
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
            break;
        }
        else if (maior){
            cout << "Seu chute � maior que o n�mero secreto\n";            
        }
        else{
            cout << "Seu chute � menor que o n�mero secreto\n";            
        }       
        
    }
    cout << "Fim de Jogo\n";
    if (nao_acertou){
        cout << "Voc� Perdeu! Tente novamente\n";
    }
    else{
    cout << "Voc� acertou o numero secreto em  " << tentativas << " tentativas\n";
        cout.precision(2);
        cout << fixed;
        cout << "Sua Pontua��o foi: " << pontos << endl;
    }
    
    return 0;
}
