#include <iostream>
using namespace std;

int main()
{
    int num;
    int i;
    int soma;
    i = 1;
    soma = 1;

    cout << "Digite um numero de 2 a 10: \n";
    cin >> num;

    while(num < 2 || num > 10){
        cout << "Digite um numero de 2 a 10: \n";
        cin >> num;
    }
    while(i < num){
            i++;
            soma *= i;
    }
    cout << "\nFatorial de " << num << " e: " << soma << " i: " << i;
}
