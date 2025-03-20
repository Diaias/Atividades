using namespace std;
#include <iostream>

int main()
{

    float salariob;
    float valorp;

    float valid;
    float comp;

    cout << "Digite o salario bruto:\n";
    cin >> salariob;

    cout << "Digite o valor da prestacao:\n";
    cin >> valorp;

    valid = salariob * 0.3;
    comp = (valorp/salariob) * 100;

    if(valorp > valid){
        cout << "O emprestimo nao pode ser concedido";
    }else{
        cout << "O emprestimo pode ser concedido e ira comprometer " << comp << "% do salario" ;
    }
    return 0;
}
