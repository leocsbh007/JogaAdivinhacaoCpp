#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "***************************************\n";
    cout << "* Boas vindas ao Jogo da Adivinha��o! *\n";
    cout << "***************************************\n";
    
    int numero_secreto = 42;
    int chute;

    cout << "Qual � o seu chute?\n";
    cin >> chute;



    if (chute == numero_secreto){
        cout << "Voc� acertou o n�mero secreto\n";
    }
    else if (chute > numero_secreto){
        cout << "Seu chute � maior que o n�mero secreto";
    }
    else{
        cout << "Seu chute � menor que o n�mero secreto";
    }
    
    
    return 0;
}
