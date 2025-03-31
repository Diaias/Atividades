#include <iostream>
using namespace std;

int main()
{
    int i;
    float b;
    float somab;
    int menor;
    menor = 0;

    while (i < 12){
        cout << "Digite o valor de B:\n";
        cin >> b;

        somab += b;

        if( b < 50){
            menor++;
        }
        i++;
    }

    cout << "Soma Total: \n" << somab << "\n"
         << "Numeros menores que 50: \n" << menor << "\n";
}
