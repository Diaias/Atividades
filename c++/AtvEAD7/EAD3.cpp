#include <iostream>
using namespace std;

int main()
{
    int altura;
    int i;
    int x;
    x = 0;

    cout << "Digite a altura:";
    cin >> altura;

    while(i < altura){
    i++;
        while(x < i){
            cout<<"*";
            x++;
        }
        x = 0;
    }
}
