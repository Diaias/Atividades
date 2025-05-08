#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    string resultado = "Vetor: ";

    vector<int> numbers;


    for(int i = 0; i < 6; i++){
        cout << "Digite 6 numeros inteiros: \n";
        cin >> num;
        numbers.push_back(num);
        string coiso = to_string(numbers.at(i));
        resultado += coiso;
        cout << resultado << "\n";
        resultado += ", ";
    }
        cout << "Vetor trocado: " << numbers.at(5) << ", " <<
                                     numbers.at(3) << ", " <<
                                     numbers.at(3) << ", " <<
                                     numbers.at(2) << ", " <<
                                     numbers.at(1) << ", " <<
                                     numbers.at(0);



}
