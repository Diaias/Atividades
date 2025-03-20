using namespace std;
#include <iostream>

int main()
{
    int idade;

    cout << "Digite a idade:\n";
    cin >> idade;

    if(idade< 16){
        cout << "nao-eleitor";
    }else if(idade > 18 && idade <= 65 ){
        cout << "eleitor obrigatorio";
    }else{
        cout << "eleitor facultativo";
    };

    return 0;
}
