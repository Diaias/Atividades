#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;



main() {
        const int TAM = 12;
    int i;
    float vi, vp, vlci, vcdb, vet1[TAM], vet2[TAM], vet3[TAM];

    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);

    cout << "Digite o valor inicial: \n";
    cin >> vi;

    vp = vi;
    vlci = vi;
    vcdb = vi;

    for(i=0; i<TAM; i++){

        vp = vp*1.0045;
        vet1[i] = vp;

        vlci = vlci*1.0087;
        vet2[i] = vlci;

        vcdb = vcdb*1.01;
        vet3[i] = vcdb;
    };
    cout << "Poupanca";
    cout << "\n";
    for(i = 0; i<TAM;i++){
        cout<< setprecision(2)<<"["<<vet1[i]<<"] ";
    };
    cout << "\n";
    cout << "LCI";
    cout << "\n";
    for(i = 0; i<TAM;i++){
        cout<< setprecision(2)<<"["<<vet2[i]<<"] ";
    };
    cout << "\n";
    cout << "CDB";
    cout << "\n";
    for(i = 0; i<TAM;i++){
        cout<< setprecision(2)<<"["<<vet3[i]<<"] ";
    };
}
//Tipo	Descri��o	Rendimento

//1	Poupan�a	0.45%
//2	LCI	0.87%
//3	CDB	1.0%

//Escreva um programa que receba o valor inicial aplicado e ap�s gere tr�s
//vetores que devem armazenar a evolu��o do rendimento nos 12 primeiros meses,
//ap�s solicite ao usu�rio qual o tipo de aplica��o e qual o n�mero do m�s quer
//verificar e o sistema dever� apresentar o valor atualizado da referida aplica��o no referido m�s.
