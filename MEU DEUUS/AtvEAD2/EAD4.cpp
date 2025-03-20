using namespace std;
#include <iostream>

int main()
{
    float salario;
    float quilow;


    cout << "Digite o salario Minimo: \n";
    cin >> salario;

    cout << "Digite a qantidade de quilowatts gasta: \n";
    cin >> quilow;

    float valorQw = salario/7/100;
    float valorP = valorQw*quilow/100;
    float valorQwDes = valorP*0.9;

    cout << "Valor de cada quilowatts: "<<valorQw<<"\n"<<
            "Valor total a ser pago: "<<valorP<<"\n"<<
            "Valor a ser pago com desconto: "<<valorQwDes<<"\n\n\n";

    return 0;
}
