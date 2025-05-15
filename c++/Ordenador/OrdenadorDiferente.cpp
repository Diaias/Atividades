#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int TAM = 10;
    int i, j, vet[TAM], min, aux;

    cout << "Mostrando vetor: \n";

    for(i=0; i<TAM; i++){

        vet[i]=rand()%10;
        cout<<"\n Informe o Numero:["<<i<<"]:"<<vet[i];

        for(j=0; j<i; j++){
            if(vet[i] == vet[j]){
                cout<<"\nja teve igual";
                i--;
            }
        }
    }

    //PARTE QUE IMPORTA

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            //pra colocar em ordem crescente vet[j] > vet[i]
            //pra colocar em ordem decrescente vet[j] < vet[i]
            if(vet[j] > vet[i]){
                min = vet[j];
                aux = vet[j];
                vet[j]=vet[i];
                vet[i]=min;
            }
        }
    }

    //DEIXA DE IMPORTAR

    cout << "\n\nVetor Ordenado:\n";
    for(i=0; i<TAM; i++){
        cout<<"\n["<<i<<"]:"<<vet[i];
    }
}
