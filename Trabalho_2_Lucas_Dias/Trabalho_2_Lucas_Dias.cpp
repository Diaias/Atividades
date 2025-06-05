#include <iostream>
#include <iomanip>
#include <cstdlib>
#include<ctime>
using namespace std;


main() {
    int saldos[10], contas[10], vet[12];
    int i, cod, op, j, coddep, dep, codsaq,saq;
    float saldo, total;

    while(1 == 1){
        system("CLS");
        cout<<"\n escolha Opcao:";
        cout<<"\n 0- Inicializar Vetores e Saldo";
        cout<<"\n 1- Efetuar Deposito";
        cout<<"\n 2- Efetuar Saque";
        cout<<"\n 3- Consultar o Ativo Bancario";
        cout<<"\n 4- Finalizar o Programa\n";
        cin>>op;
        switch(op)
        {
        case 0:
            for(i=0; i<3; i++){
                cout << "Informe numero de conta para posicao: "<< i <<"\n";
                cin >> cod;
                contas[i] = cod;
                for(j=0; j<i; j++){
                    if(contas[i] == contas[j]){
                        cout<<"\nConta ja cadastrada na posicao " << contas[i] << "\n";
                        i--;
                    }
                }
            }
            for(i = 0; i<3; i++){
                cout << "Digite o Saldo da Conta " << contas[i] << ":\n";
                cin >> saldo;
                saldos[i] = saldo;
            }
            break;
        case 1:
                    if(contas[1] != 0 ){
                        cout << "1.Efetuar Deposito\n";
                        cout << "Informe o numero da conta: ";
                        cin >> coddep;
                        for(i=0; i<3; i++){
                        if(contas[i] == coddep){
                            cout<<"\nInforme o valor para deposito: ";
                            cin >> dep;
                            saldos[i] += dep;
                            cout<<"Deposito efetuato com sucesso";
                            }
                        }

                    }else{
                        cout << "Opcao invalida, e necessario selecionar anteriormente a opcao 0\n";

                    }

            break;
        case 2:
             if(contas[1] != 0 ){
                        cout << "2.Efetuar Saque\n";
                        cout << "Informe o numero da conta: ";
                        cin >> codsaq;
                        for(i=0; i<3; i++){
                        if(contas[i] == codsaq){
                            cout<<"\nInforme o valor para saque: ";
                            cin >> saq;
                            if(saldos[i] - saq < 0){
                                cout << "Saldo insuficiente para saque\n";
                                break;
                            }else{
                                saldos[i] -= saq;
                                cout<<"Saque efetuato com sucesso";
                                break;
                            }
                        }
                    }
                    }else{
                        cout << "Opcao invalida, e necessario selecionar anteriormente a opcao 0\n";
                    }
            break;
        case 3:
            if(contas[1] != 0 ){
                        cout << "3.Consultar o ativo bancario\n";
                        cout << "Conta      Saldo\n";
                        for(i = 0; i < 3; i++){
                                total += saldos[i];
                            cout << contas[i] << "          "<< saldos[i] << std::setprecision(2)<< "\n";
                        }
                        cout << "Total: -------------\n";
                        cout << "           "<< total << std::setprecision(2);
                                }else{
                        cout << "Opcao invalida, e necessario selecionar anteriormente a opcao 0\n";
                    }

            break;
        case 4:
            cout<<"\n ***** SAINDO *****\n ";
            exit(0);
            break;
            default:
            cout<<"\n ***** Opcao invalida *****\n ";

        }

        cout<<"\n\n";
        system("PAUSE");
    }while(op!=0);


     cout<<"\n\n\n";
    main();
 }


