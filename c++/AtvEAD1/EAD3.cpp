#include <iostream>
using namespace std;

int main()
{
    float valortotal;

    cout << "Digite o valor total da conta:\n";
    cin >> valortotal;

    int C = valortotal/3;
    int A = valortotal/3;
    float F = valortotal - C - A;

    cout << "Carlos paga: " <<C<<"\n"
         << "Andre paga: " <<A<<"\n"
         << "Felipe paga: " <<F;

    return 0;
}
