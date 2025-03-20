using namespace std;
#include <iostream>

int main()
{
    float valor;

    cout << "Digite o valor:\n";
    cin >> valor;

    float vquadrado = valor*valor;
    float vcubo = valor*valor*valor;

    cout << "Valor ao quadrado: " << vquadrado << "\n"
         << "Valor ao cubo: " << vcubo;

    return 0;
}
