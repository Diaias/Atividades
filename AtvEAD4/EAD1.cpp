using namespace std;
#include <iostream>

int main()
{
    int idade;
    int temps;
    float salariom;

    cout << "Digite a idade:\n";
    cin >> idade;

    cout << "Digite o tempo servido:\n";
    cin >> temps;

    cout << "Digite a media de salario:\n";
    cin >> salariom;

    if(idade > 65){
        cout << "Tem direito a aposentadoria, salario de R$: " << salariom * 0.9;
    }else if(idade >= 55 && temps >= 30){
        cout << "Tem direito a aposentadoria, salario de R$: " << salariom * 0.85;
    }else if(idade >= 60 && temps >= 25){
        cout << "Tem direito a aposentadoria, salario de R$: " << salariom * 0.75;
    }else{
        cout << "Não tem direito a aposentadoria";
    }

    return 0;
}
