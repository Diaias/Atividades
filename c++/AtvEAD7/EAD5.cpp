#include <iostream>
using namespace std;

int main()
{
    int voto;
    int cand1;
    int cand2;
    int cand3;
    int cand4;
    int votonulo;
    int votobranco;
    int votost;

    cand1 = 0;
    cand2 = 0;
    cand3 = 0;
    cand4 = 0;
    votonulo = 0;
    votobranco = 0;

    while(voto != 0){
        cout << "Digite o voto: \n";
        cin >> voto;
        switch (voto) {
            case 1:
                cand1++;
                break;
            case 2:
                cand2++;
                break;
            case 3:
                cand3++;
                break;
            case 4:
                cand4++;
                break;
            case 5:
                votonulo++;
                break;
            case 6:
                votobranco++;
                break;
        }
    }
    votost = cand1 + cand2 + cand3 + cand4 + votonulo + votobranco;
    cout << "Numero de votos totais: " << votost << "\n"
            "Numero de votos para candidato 1: " << cand1 << "\n"
            "Numero de votos para candidato 2: " << cand2 << "\n"
            "Numero de votos para candidato 3: " << cand3 << "\n"
            "Numero de votos para candidato 4: " << cand4 << "\n"
            "Numero de votos nulo: " << votonulo << "\n"
            "Numero de votos em branco: " << votobranco << "\n"
            ;

}
