#include <iostream>
using namespace std;

int main()
{
    int i;

    int a;
    int b;

    int difab;
    difab = 0;
    int somaa;
    int somab;
    int somat;
    somat = 0;
    int impares;
    impares = 0;
    int pares;
    pares = 0;
    float porcpares;

    cout << "Digite o valor de A:\n";
    cin >> a;

    cout << "Digite o valor de B:\n";
    cin >> b;

    if(a>=b){
        difab = a-b-1;
        somab = b;
        while(i < difab){
            somab++;
            if(somab%2 == 0){
                pares++;
            }
            if(somab%2 != 0){
                impares++;
            }
            somat += somab;
            i++;
        }
    }else
    if(b>a){
        difab = b-a-1;
        somaa = a;
        while(i < difab){
            somaa++;
            if(somaa%2 == 0){
                pares++;
            }
            if(somaa%2 != 0){
                impares++;
            }
            somat += somaa;
            i++;
        }
    }
    porcpares = 100*pares/difab;

    cout << "Soma Int entre A e B: \n" << somat << "\n"
         << "Numeros Impares entre A e B: \n" << impares << "\n"
         << "Numeros Pares entre A e B: \n" << porcpares << "%" << "\n";
}
