#include <iostream>
using namespace std;

int main()
{
    float custof;

    cout << "Digite o custo de fabrica:\n";
    cin >> custof;

    float valord = custof*1.28;
    float valori = valord+custof*0.45;

    cout << "Custo final: "<<valori;

    return 0;
}
