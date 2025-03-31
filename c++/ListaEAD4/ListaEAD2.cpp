#include <iostream>
using namespace std;

int main()
{
    float temp;
    int i;

    float maiortemp;
    float menortemp;
    menortemp = 100000;

    int maiortempv;
    int menortempv;

    float temptotal;
    float mediatemp;

    while (i < 5){
        cout << "Digite o tempo da volta:\n";
        cin >> temp;

        temptotal += temp;

        if( maiortemp < temp){
            maiortemp = temp;
            maiortempv = i+1;
        }
        if( menortemp > temp){
            menortemp = temp;
            menortempv = i+1;
        }
        i++;
    }

    mediatemp = temptotal/5;

    cout << "Media das voltas: \n" << mediatemp << "s" << "\n"
         << "Maior tempo: \n" << maiortemp << "s" << "\n"
         << "Menor tempo: \n" << menortemp << "s" << "\n"
         << "Tempo Total: \n" << temptotal << "s" << "\n";
}
