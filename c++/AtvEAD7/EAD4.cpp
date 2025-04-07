#include <iostream>
using namespace std;

int main()
{
    int numero;
    int maiornum;
    maiornum = 0;
    int vez;
    vez = 0;
    int i;
    i = 0;

    while(i < 10){
        cout << "Digite o numero:";
        cin >> numero;
        if(numero > maiornum){
            maiornum = numero;
            vez = i + 1;
        }
        i++;
    }
    cout << "Maior numero: " << maiornum << "\n" <<
            "Vez que foi digitado: " << vez << "\n";
}
