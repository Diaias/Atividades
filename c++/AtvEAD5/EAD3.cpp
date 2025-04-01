#include <iostream>
using namespace std;

int main()
{
    int i;

    int num;

    int total;

        cout << "Digite o numero:\n";
        cin >> num;

    if(num > 10 || num < 1){
        cout << "Digite um numero valido:\n";
        exit(0);
    }else{
        while(i < 10){
            total = num*(i+1);
            cout << i+1 << " x " << num << " = " << total << "\n";
            i++;
        }
    }
}
