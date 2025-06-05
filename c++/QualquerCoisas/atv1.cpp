#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;



main() {
         int N, impar, soma, i;
         cout<<"\n Querido usuario informe um numero: ";
         cin>>N;
         int vet[N];
         impar=1;
         soma=0;
         for(i=0  ;i<N ; i++ )
         {
             vet[i]=impar;
             impar= impar + 2;
             soma = soma + vet[i];
         }

      cout<<"\n Mostrando vetor \n";
      for(i=0; i < N ; i++)
      {
             cout<<"\n["<<i<<"]:" << vet[i];
      }

      cout<<"\n A soma : "<<soma;
      cout<<"\n\n\n";

      main();
 }

