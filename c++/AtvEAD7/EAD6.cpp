#include <iostream>
using namespace std;

int main()
{
    int altura;
    int i;
    int x;
    int y;

    x = 0;
    y = 0;

    cout << "Digite a altura:";
    cin >> altura;

    while(i < altura){
    i++;
        while(x < i){
            cout<<"*";
            x++;
        }
        x = 0;
        cout<<"\n";
    }
    i = 0;
    y = altura ;
    while(i < altura){
    i++;
        while(i <= y){
            cout<<"*";
            y -= 1;
        }
        y = altura;
        cout<<"\n";
    }
}
