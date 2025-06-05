#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>
using namespace std;


main() {
    int M[10][10];
    int L, C, i;

    for(L=0; L<10; L++){
        for(C=0; C<10; C++){
        M[L][C] = rand()%1000;
        cout << M[L][C]<<"\t";
        }
        cout << "\n";
    }
    int maior = M[0][0];
    int Lma = 0;
    int Cma = 0;
    int menor = M[0][0];
    int Lme = 0;
    int Cme = 0;
    for(L=0; L<10; L++){
        for(C=0; C<10; C++){
            if(M[L][C] > maior){
                maior = M[L][C];
                Lma = L;
                Cma = C;
            }
            if(M[L][C] < menor){
                menor = M[L][C];
                Lme = L;
                Cme = C;
            }
        }
    }
    cout << "\n O maior elemento da matriz e "<<maior;
    cout << "\n Esta na linha "<<Lma<< " coluna "<< Cma;
    cout << "\n O menor elemento da matriz e "<<menor;
    cout << "\n Esta na linha "<<Lme<< " coluna "<< Cme;
 }


