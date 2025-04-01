#include <iostream>
using namespace std;

int main()
{
    int N;

    int quantidade;

        cout << "Digite o valor de N:\n";
        cin >> N;

    if(N%2 == 0){
        cout << "Digite um numero valido:\n";
        exit(0);
    }else{
            for (int i = 0; i < ((N/2)+1); i++) {
                for (int x = 0; x < (N - i - 1); x++) {
                    cout << " ";
                }
                for (int y = 0; y < (2 * i + 1); y++) {
                    cout << "*";
                }
            cout << endl;
        }
            for (int i = 0; i < (N/2); i++) {

                for (int x = 0; x < i+((N/2)+1); x++) {
                    cout << " ";
                }
                 for (int y = 0; y < ((N-i-1)-1-i); y++) {
                    cout << "*";
                    }
                cout << endl;
            }
    }
}
