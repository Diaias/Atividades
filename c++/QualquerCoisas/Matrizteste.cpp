#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>
using namespace std;


main() {
    int M[5][5], SL[5], SC[5];
    int L, C, i, somaL, somaC;

    for(L=0; L<5; L++){
        for(C=0; C<5; C++){
        M[L][C] = rand()%10;
        cout << M[L][C]<<"\t";
        }
        cout << "\n";
    }

    for(L=0; L<5; L++){
        somaL = 0;
        for(C=0; C<5; C++){
            somaL += M[L][C];
        }
        //cout << "\n soma da linha "<<L<< " e "<<somaL;
        SL[L]=somaL;
    }
    cout << "\n Mostrando valor vetor SL \n";
    for(i=0;i<5;i++){
        cout << SL[i]<<"\t";
    }
    for(C=0; C<5; C++){
        somaC = 0;
        for(L=0; L<5; L++){
            somaC += M[L][C];
        }
        //cout << "\n soma da linha "<<L<< " e "<<somaL;
        SC[C]=somaC;
    }
    cout << "\n Mostrando valor vetor SC \n";
    for(i=0;i<5;i++){
        cout << SC[i]<<"\t";
    }
 }


