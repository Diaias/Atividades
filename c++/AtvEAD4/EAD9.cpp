using namespace std;
#include <iostream>

int main()
{

    string nome;
    string sexo;
    float altura;
    int idade;

    string sexom;
    string sexof;
    sexom = "m";
    sexof = "f";

    float pesoideal;

    cout << "Digite o nome:\n";
    cin >> nome;
    cout << "Digite o sexo:\n"
         << "[M/F]\n";
    cin >> sexo;
    cout << "Digite o altura:\n";
    cin >> altura;
    cout << "Digite o idade:\n";
    cin >> idade;



    if(sexo == sexom){
        if(altura > 1.70){
            if(idade <= 20){
                pesoideal = 58;
            }else if(idade > 20 && idade < 40){
                pesoideal = 53;
            }else if(idade >= 40){
                pesoideal = 45;
            }
        }else if(altura <= 1.70){
            if(idade <= 40){
                pesoideal = 50;
            }else if(idade > 40){
                pesoideal = 58;
            }
        }
    }else if(sexo == sexof){
        if(altura > 1.50){
            pesoideal = 44.7;
        }else if(altura <= 1.50){
            if(idade >= 35){
                pesoideal = 45;
            }else if(idade < 35){
                pesoideal = 49;
            }
        }
    }

    cout << "Peso Ideal: " << pesoideal;


    return 0;
}
