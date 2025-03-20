using namespace std;
#include <iostream>
#include<vector>
#include<algorithm>

int main()
{
    int num;

    float a;
    float b;
    float c;

    int caso;

    vector<float> v;

    cout << "Digite o valor de NUM:\n";
    cin >> num;

    cout << "Digite o valor de A:\n";
    cin >> a;

    cout << "Digite o valor de B:\n";
    cin >> b;

    cout << "Digite o valor de C:\n";
    cin >> c;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(),v.end());

    if(num == 1){
        cout << v.at(0) << ", " << v.at(1) << ", " << v.at(2);
    }else if(num == 2){
        cout << v.at(2) << ", " << v.at(1) << ", " << v.at(0);
    }else if(num == 3){
        cout << v.at(0) << ", " << v.at(2) << ", " << v.at(1);
    }else{
        cout << "Digite um NUM valido";
    }

    return 0;
}
