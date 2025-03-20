using namespace std;
#include <iostream>

int main()
{

    string nome;
    int idade;

    float valor;

    cout << "Digite o nome:\n";
    cin >> nome;

    cout << "Digite a idade:\n";
    cin >> idade;

    switch(idade){
        case 0 ... 10:
            valor = 30;
            break;
        case 11 ... 29:
            valor = 60;
            break;
        case 30 ... 45:
            valor = 120;
            break;
        case 46 ... 59:
            valor = 150;
            break;
        case 60 ... 65:
            valor = 250;
            break;
        case 66:
            valor = 400;
            break;
    }

    cout << "Nome: " << nome << "\n"
         << "Idade: " << idade << "\n"
         << "Valor: " << valor << "\n";
    return 0;
}
