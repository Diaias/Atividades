#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int formap;
    float valorc;

    float desconto;
    float valorfinal;

    cout << "Informe a forma de pagamento:\n";
    cin >> formap;

    while(formap < 1 || formap > 4){
        cout << "Forma de pagamento invalida.\n\n";
        cout << "Informe uma forma de pagamento valida:\n";
        cin >> formap;
    }
    if(formap == 4){
            exit(0);
        }

    cout << "Informe o valor da compra:\n" << fixed << setprecision(2);
    cin >> valorc;

    while(valorc < 1){
        cout << "Valor da compra nao pode ser menor que um.\n\n";
        cout << "Informe um valor da compra valido:\n" << fixed << setprecision(2);
        cin >> valorc;
    }

    if(valorc <= 100){
        switch(formap){
        case 1:
            desconto = valorc * 0.05;
            break;
        case 2:
            desconto = valorc * 0.02;
            break;
        case 3:
            desconto = valorc * 0;
            break;
        }
    }else if(valorc > 100 && valorc <= 500){
        switch(formap){
        case 1:
            desconto = valorc * 0.1;
            break;
        case 2:
            desconto = valorc * 0.08;
            break;
        case 3:
            desconto = valorc * 0.04;
            break;
        }
    }else if(valorc > 500){
        switch(formap){
        case 1:
            desconto = valorc * 0.15;
            break;
        case 2:
            desconto = valorc * 0.1;
            break;
        case 3:
            desconto = valorc * 0.075;
            break;
        }
    }
        valorfinal = valorc - desconto;

        cout << "Valor da Compra R$: "<<valorc<<"\n"
             << "Valor do desconto R$: "<<desconto << fixed << setprecision(2) <<"\n"
             << "Valor final da compra R$: "<<valorfinal << fixed << setprecision(2) <<"\n";
}
