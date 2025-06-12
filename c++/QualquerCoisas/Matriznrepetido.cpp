#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>
using namespace std;


//##FUNCIONANDO SÓ PELAS LINHAS##

main() {
    int M[3][3];
    int L, C, i, j, x, nrep;
    bool rep;
    rep = false;

    for(L=0; L<3; L++){

            for(C=0; C<3; C++){

                M[L][C] = rand()%10;

                    for(x=0; x<C; x++){

                        j = L;

                        if(M[j][x] == M[j][C]){

                            nrep = M[j][x];

                            rep = true;

                            C--;

                        }else{

                            rep = false;

                        }

                    }//x

                if(rep == false){

                    cout << L << ":" << C << " [" << M[L][C]<< "]" <<"\t";

                    }
            }//C
        cout << "\n";

    }//L
    cout << rep << "\n";
    cout << nrep;
    cout << "\n\n";
 }
