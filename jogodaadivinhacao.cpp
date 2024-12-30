#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    cout << "***************************************\n";
    cout << "* Boas vindas ao Jogo da Adivinhação! *\n";
    cout << "***************************************\n";
    
    int numero_secreto = 42;
    int chute;

    cout << "Qual é o seu chute?\n";
    cin >> chute;



    if (chute == numero_secreto){
        cout << "Você acertou o número secreto\n";
    }
    else if (chute > numero_secreto){
        cout << "Seu chute é maior que o número secreto";
    }
    else{
        cout << "Seu chute é menor que o número secreto";
    }
    
    
    return 0;
}
