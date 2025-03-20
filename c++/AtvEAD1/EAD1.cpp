#include <iostream>
using namespace std;

int main()
{
    float valord;
    float valorr;
    float indice = 5.79;

    cout << "Digite o valor em dolar:\n";
    cin >> valord;

    float valor = valord * indice;

    cout << "O valor em Reais ficaria: " << valor;

    return 0;
}
