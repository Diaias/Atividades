#include <iostream>
using namespace std;

int main()
{
    float valor1;
    float valor2;
    float valor3;
    float valor4;

    cout << "Digite o valor do primeiro produto:\n";
    cin >> valor1;

    cout << "Digite o valor do segundo produto:\n";
    cin >> valor2;

     cout << "Digite o valor do terceiro produto:\n";
    cin >> valor3;

     cout << "Digite o valor do quarto produto:\n";
    cin >> valor4;

    float valortotal = valor1 + valor2 + valor3 + valor4;

    float pontos = valortotal/5;

    cout << "O valor total ficou: " <<valortotal<<"\n"
         << "Pontos acumulados: " <<pontos;

    return 0;
}
