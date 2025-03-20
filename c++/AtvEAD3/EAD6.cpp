using namespace std;
#include <iostream>

int main()
{
    float valor;
    float valort;
    int forma;

    cout << "Digite o valor do produto:\n";
    cin >> valor;

    cout << "Digite a forma de pagamento:\n";
    cin >> forma;

    if(forma == 1){
        valort = valor*0.9;
        cout << "Valor total a ser pago a vista: R$" << valort;
    }else if(forma == 2){
        valort = valor*1.05;
        cout << "Valor total a ser pago parcelado: R$" << valort;
    }else{
        cout << "Digite uma forma de pagamento valida";
    }

    return 0;
}
