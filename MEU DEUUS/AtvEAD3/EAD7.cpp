using namespace std;
#include <iostream>
#include<vector>
#include<algorithm>

int main()
{

    int numero;
    int digito1;
    int digito2;
    int soma;

    cout << "Digite o numero:\n";
    cin >> numero;

    if(numero >= 10 && numero <=99){
        for(int i=0; i<2 ; i++)
        {
            digito1=numero%10;
            digito2=numero/10;
        }
        soma = digito1 + digito2;
        if(numero % soma == 0){
            cout << numero << " e um numero de Harshad";
        }else{
            cout << numero << " nao e um numero de Harshad";
        }
    }else{
        cout << "Digite um numero valido";
    }
    return 0;
}
