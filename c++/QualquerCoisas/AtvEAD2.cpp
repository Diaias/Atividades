#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;



main() {
        const int TAM = 50;
    int i, j, vet[TAM], min, aux, teste;
    teste = -1;
    cout << "Mostrando vetor: \n";

    for(i=0; i<TAM; i++){

        vet[i]=rand()%90;
        for(j=0; j<i; j++){
            if(vet[i] == vet[j] || vet[i]<20){
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

    for(i = 0; i<50;i++){
        teste++;
        if(teste == 10){
            teste = 0;
            cout << "\n";
        }
        cout<<"["<<vet[i]<<"] ";
    }
}

//Escrever um programa que gere um vetor de 50 posi��es com valores no intervalo de 20 a 99 sem n�meros repetidos.
//Mostrar o vetor gerado na tela, exibindo no m�ximo 10 elementos em cada linha, em seguida ordenar em ordem crescente
//o vetor e exibir o vetor ordenado tamb�m com no m�ximo 10 elementos em cada linha
