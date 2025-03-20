using namespace std;
#include <iostream>

int main()
{
    float salariom;
    int horast;
    int dependentes;
    int horase;
    bool deficiencia;

    float salario;
    int vdependentes;
    float vhorase;
    float salariob;
    float salariot;
    float imposto;


    cout << "Digite o salario minimo:\n";
    cin >> salariom;

    cout << "Digite as horas trabalhadas:\n";
    cin >> horast;

    cout << "Digite o numero de horas extras:\n";
    cin >> horase;

    cout << "Digite o numero de dependentes:\n";
    cin >> dependentes;

    cout << "Digite se possui alguma deficiencia:\n"<<
             "[1 para sim/0 para nao]\n";
    cin >> deficiencia;

    salario = horast * (salariom * 0.1);
    vdependentes = dependentes * 32;
    vhorase = (horase * salariom * 0.1) * 1.5;
    salariob = salario + vdependentes + vhorase;

    if(salariob < 2500 && salariob > 0 || deficiencia == 1){

            salariot = salariob;

        cout << "Salario Bruto R$: "<<salariob<<"\n"
             << "Imposto de Renda R$: Isento\n"
             << "Salario Liquido R$: "<<salariot<<"\n";

    }else if(salariob >= 2500 && salariob < 5000){

            imposto = salariob * 0.1;
            salariot = salariob - imposto;

        cout << "Salario Bruto R$: "<<salariob<<"\n"
             << "Imposto de Renda R$: "<<imposto<<"\n"
             << "Salario Liquido R$: "<<salariot<<"\n";


    }else if(salariob >= 5000 && salariob < 7000){

        imposto = salariob * 0.18;
        salariot = salariob - imposto;

        cout << "Salario Bruto R$: "<<salariob<<"\n"
             << "Imposto de Renda R$: "<<imposto<<"\n"
             << "Salario Liquido R$: "<<salariot<<"\n";

    }else if(salariob >= 7000){

        imposto = salariob * 0.25;
        salariot = salariob - imposto;

        cout << "Salario Bruto R$: "<<salariob<<"\n"
             << "Imposto de Renda R$: "<<imposto<<"\n";

    }else{

        cout << "Valor Invalido";

    }
    return 0;
}
