using namespace std;
#include <iostream>

int main()
{

    int cod;
    string desc;
    float preco;
    int estoq;
    string tipo;

    string tipop;
    string tipos;
    tipop = "p";
    tipos = "s";
    float porcentagem;
    float valore;

    cout << "Digite o codigo:\n";
    cin >> cod;

    cout << "Digite a descricao do produto:\n";
    cin >> desc;

    cout << "Digite o preco de custo do produto:\n";
    cin >> preco;

    cout << "Digite o estoque do produto:\n";
    cin >> estoq;

    cout << "Digite o tipo do produto:\n"<<
             "[S/P]\n";
    cin >> tipo;

    if(tipo == tipop){
        porcentagem = 0.8;
    }else if(tipo == tipos){
        porcentagem = 0.65;
    }

    valore = estoq * (preco * porcentagem);

    cout << "Codigo: " << cod << "\n"
         << "Descricao: " << desc << "\n"
         << "Quantidade de estoque: " << estoq << "\n"
         << "Preco de custo: " << preco << "\n"
         << "Tipo: " << tipo << "\n"
         << "Valor em estoque: " << valore << "\n";



    return 0;
}
