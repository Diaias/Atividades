#include <iostream>
using namespace std;

int main()
{
    int mes;
    int i;
    float corr;
    float vinicial;
    float valor;
    float corr2;
    i = 0;

    cout << "Digite o valor inicial: \n";
    cin >> vinicial;

    cout << "Digite o total de meses: \n";
    cin >> mes;

    cout << "Digite a correcao: \n";
    cin >> corr;
    corr = corr /100;
    corr2 = corr;

    cout << "\n Mes \t Valor inicial \t Rendimento \t Valor Final";
    while(i < mes){
            valor = 100*corr;
            corr += corr * corr;
            i++;
            cout << corr<<"\n";
    }
}
