#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int nalunos;
    int i;

    float media;
    float medias;
    float mediat;

    float maiornota;
    float menornota;
    menornota = 10;

    int reprovados;
    int aprovados;
    reprovados = 0;
    aprovados = 0;

    float porcaprovados;
    float porcreprovados;

    cout << "Digite o numero de alunos:\n";
    cin >> nalunos;

    while(nalunos > i){
        cout << "Digite a media do aluno:\n";
        cin >> media;

        medias += media;

        if( maiornota < media){
            maiornota = media;
        }
        if( menornota > media){
            menornota = media;
        }

        if( media >= 6){
            aprovados ++;
        }else{
            reprovados ++;
        }
        i++;
    }

    mediat = medias/nalunos;
    porcaprovados = 100*aprovados/nalunos;
    porcreprovados = 100*reprovados/nalunos;

    cout << "Media da turma: \n" << fixed << setprecision(1) << mediat << "\n"
         << "Maior media: \n" << maiornota << "\n"
         << "Menor media: \n" << menornota << "\n"
         << "Porcetagem de aprovados: \n" << porcaprovados << "%" << "\n"
         << "Porcetagem de reprovados: \n" << porcreprovados << "%" << "\n";
}
