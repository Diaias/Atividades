using namespace std;
#include <iostream>

int main()
{

    int numm;

    cout << "Digite o numero do mes:\n";
    cin >> numm;

    if(numm < 1 || numm > 12){
        cout << "Digite um numero valido";
    }else{
        switch(numm){
        case 1:
            cout << "Janeiro";

        case 2:
            cout << "Fevereiro";
            break;

        case 3:
            cout << "Marco";
            break;

        case 4:
            cout << "Abril";
            break;

        case 5:
            cout << "Maio";
            break;

        case 6:
            cout << "Junho";
            break;

        case 7:
            cout << "Julho";
            break;

        case 8:
            cout << "Agosto";
            break;

        case 9:
            cout << "Setembro";
            break;

        case 10:
            cout << "Outubro";
            break;

        case 11:
            cout << "Novembro";
            break;

        case 12:
            cout << "Dezembro";
            break;
        }
    }

    return 0;
}
