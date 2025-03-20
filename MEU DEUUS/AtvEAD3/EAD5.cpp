using namespace std;
#include <iostream>

int main()
{
    int ano;
    int mes;

    cout << "Digite o ano:\n";
    cin >> ano;

    cout << "Digite o mes:\n";
    cin >> mes;

    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){

        cout << "E ano bissexto\n";
                switch (mes) {
          case 1:
            cout << "31 Dias";
            break;
          case 2:
            cout << "29 Dias";
            break;
          case 3:
            cout << "31 Dias";
            break;
          case 4:
            cout << "30 Dias";
            break;
          case 5:
            cout << "31 Dias";
            break;
          case 6:
            cout << "30 Dias";
            break;
          case 7:
            cout << "31 Dias";
            break;
          case 8:
            cout << "31 Dias";
            break;
          case 9:
            cout << "30 Dias";
            break;
          case 10:
            cout << "31 Dias";
            break;
          case 11:
            cout << "30 Dias";
            break;
          case 12:
            cout << "31 Dias";
            break;
        }
    }else{

        cout << "Nao e ano bissexto\n";
         switch (mes) {
          case 1:
            cout << "31 Dias";
            break;
          case 2:
            cout << "28 Dias";
            break;
          case 3:
            cout << "31 Dias";
            break;
          case 4:
            cout << "30 Dias";
            break;
          case 5:
            cout << "31 Dias";
            break;
          case 6:
            cout << "30 Dias";
            break;
          case 7:
            cout << "31 Dias";
            break;
          case 8:
            cout << "31 Dias";
            break;
          case 9:
            cout << "30 Dias";
            break;
          case 10:
            cout << "31 Dias";
            break;
          case 11:
            cout << "30 Dias";
            break;
          case 12:
            cout << "31 Dias";
            break;
         }
    }

    return 0;
}
