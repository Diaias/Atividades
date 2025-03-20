#include <iostream>
using namespace std;

int main()
{
    int segundost;

    cout << "Digite o tempo em segundos inteiros:\n";
    cin >> segundost;

    int horas = segundost/3600;
    int minutos = (segundost-(horas*3600))/60;
    int segundos = segundost - (horas*3600 + minutos*60);

    cout << horas << ":" <<minutos<<":"<<segundos;

    return 0;
}
