using namespace std;
#include <iostream>

int main()
{
    int valor;

    cout << "Digite o valor:\n";
    cin >> valor;

    int n100 = valor/100;
    int n50 = (valor - n100*100)/50;
    int n20 = (valor - (n100*100+n50*50))/20;
    int n10 = (valor - (n100*100+n50*50+n20*20))/10;
    int n5 = (valor - (n100*100+n50*50+n20*20+n10*10))/5;
    int n2 = (valor - (n100*100+n50*50+n20*20+n10*10+n5*5))/2;
    int n1 = (valor - (n100*100+n50*50+n20*20+n10*10+n5*5+n2*2))/1;
    cout << n100 << " notas de 100, "
         << n50 << " notas de 50, "
         << n20 << " notas de 20, "
         << n10 << " notas de 10, "
         << n5 << " notas de 5, "
         << n2 << " notas de 2 e "
         << n1 << " notas de 1 ";

    return 0;
}
