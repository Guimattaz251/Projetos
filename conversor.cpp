#include <iostream>

using namespace std;

int main(){

    int resposta, opcao;
    float quantia, resultado;

    while (opcao != 0){

    cout << "-----------------------------" << endl;
    cout << "|   CONVERSOR DE MOEDAS     |" << endl;
    cout << "-----------------------------" << endl;

    cout << "Digite 1 para dolar ou 2 para euro" << endl;
    cin >> resposta;

    cout << "Qual a quantia que deseja converter?" << endl;
    cin >> quantia;

    switch (resposta){

        case 1:
        resultado = (quantia/4.90);
        cout << "O resultado e " << resultado << " dolares." << endl;
        break;

        case 2:
        resultado = (quantia/5.37);
        cout << "O resultado e " << resultado << " euros." << endl;
        break;
    }

    cout << "Deseja continuar? 1 p sim 0 p nao" << endl;
    cin >> opcao;

     system("cls");

    }







  return 0;  
}