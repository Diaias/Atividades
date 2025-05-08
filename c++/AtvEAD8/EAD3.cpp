#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    float num;
    string resultado = "Vetor: ";
    float coiso;
    vector<float> numbers;
    cout << fixed << showpoint;
    cout << setprecision(2);

    int aprovados;
    int reprovados;

    float paprovados;
    float preprovados;

    for(int i = 0; i < 10; i++){
        cout << "Digite as 10 notas: \n";
        cin >> num;
        numbers.push_back(num);
        coiso = num;
        cout << coiso << "\n";
        if(num >= 6){
            aprovados += 1;
        }
    }
    std::sort(numbers.begin(),numbers.end(), less<int>());
    cout << "Vetor: ";
    for(int i = 0; i < 10; i++){
          cout << numbers.at(i) << ", ";
    }

    paprovados = aprovados*10;
    preprovados = (10-aprovados)*10;

    cout << "\n" <<
            "Maior nota: " << numbers.at(9) << "\n" <<
            "Menor nota: " << numbers.at(0) << "\n" <<
            "Percentual de alunos aprovados: " << paprovados << "%" << "\n" <<
            "Percentual de alunos reprovados: " << preprovados << "%" << "\n";
}
