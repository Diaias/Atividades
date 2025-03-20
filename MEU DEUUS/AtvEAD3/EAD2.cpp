using namespace std;
#include <iomanip>
#include <iostream>

int main()
{
    float salario;

    cout << "Digite o salario:\n";
    cin >> salario;

    std::cout << std::fixed << std::setprecision(2);

    if(salario > 4500){
        float salarioi = salario * 0.28;
        float salariol = salario - salarioi;

        cout << "Imposto de Renda R$: "<<salarioi<<
        "\nSalario Liquido R$: "<<salariol;
    }
    else if(salario <= 4500 & salario >= 3000.01){
        float salarioi = salario * 0.18;
        float salariol = salario - salarioi;

        cout << "Imposto de Renda R$: "<<salarioi<<
        "\nSalario Liquido R$: "<<salariol;
    }
    else if(salario <= 3000 & salario >= 2000.01){
        float salarioi = salario * 0.08;
        float salariol = salario - salarioi;

        cout << "Imposto de Renda R$: "<<salarioi<<
        "\nSalario Liquido R$: "<<salariol;
    }
    else{
        cout << "Imposto de Renda R$: Isento"<<
        "\nSalario Liquido R$: "<<salario;
    }

    return 0;
}
