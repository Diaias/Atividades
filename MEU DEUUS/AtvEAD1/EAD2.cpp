#include <iostream>
using namespace std;

int main()
{
    float preco;
    float desconto = 0.9;

    cout << "Digite o preco do produto:\n";
    cin >> preco;

    float precototal = preco * desconto;

    cout << "O preco com desconto fica: " << precototal;

    return 0;
}
