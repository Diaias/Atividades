using namespace std;
#include <iostream>

int main()
{
    int anof;
    int code;
    int pesoc;
    int codc;

    float imposto;
    int precoq;
    int anoc;
    int ano;
    float quilos;
    float precoc;
    float valori;
    float precot;

    cout << "Digite o ano de fabricacao:\n";
    cin >> anof;

    cout << "Digite o codigo de estado:\n";
    cin >> code;

    cout << "Digite o peso em toneladas:\n";
    cin >> pesoc;

    cout << "Digite codigo de carga:\n";
    cin >> codc;

    ano = 2025;
    anoc = ano - anof;

    if(code > 0 && code <= 5 && codc >= 10 && codc <= 40 && anof > 0 && pesoc > 0){

        switch (code){

            case 1:
                imposto = 0.35;
                break;
            case 2:
                imposto = 0.25;
                break;
            case 3:
                imposto = 0.15;
                break;
            case 4:
                imposto = 0.05;
                break;
            case 5:
                imposto = 1;
                break;
        };


          switch (codc){

            case 10 ... 20:
                  precoq = 100;
                  break;
            case 21 ... 30:
                  precoq = 250;
                  break;
            case 31 ... 40:
                  precoq = 340;
                  break;


          };

        if(pesoc > 45 || anoc > 10 && imposto != 1){
            imposto -= 0.05;
        }
        if(imposto == 0){
            imposto = 1;
        }

        quilos = pesoc * 1000;
        precoc = quilos * precoq;
        valori = precoc * imposto;
        precot = valori + precoc;

        cout << "Tempo de uso do caminhao: " << anoc << "\n"
             << "Peso da carga em quilos: " << quilos << "\n"
             << "Preco da carga: " << precoc << "\n"
             << "Valor do imposto: " << valori << "\n"
             << "Valor total: " << precot << "\n";
    }else{
        cout << "Valores Invalidos";
    }


    return 0;
}
