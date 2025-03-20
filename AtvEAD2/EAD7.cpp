#include <iostream>
using namespace std;

int main()
{
    int prestacoes;
    int prestacoesp;
    float vprestacoes;

    cout << "Digite o numero de prestacoes:\n";
    cin >> prestacoes;

    cout << "Digite o numero de prestacoes pagas:\n";
    cin >> prestacoesp;

    cout << "Digite o valor das prestacoes:\n";
    cin >> vprestacoes;

    float valort = vprestacoes*prestacoes;
    float totalp = prestacoesp*vprestacoes;
    float deve = valort-totalp;


    cout << "Total pago: "<<totalp<<"\n"
         << "Deve: "<<deve;

    return 0;
}
