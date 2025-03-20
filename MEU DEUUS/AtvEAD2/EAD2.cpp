#include <iostream>
using namespace std;

int main()
{

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;

    cout << "A: " << e*b/c;
    cout << "\nB: "<< a*d%c+1;
    cout << "\nC: "<< a*(b-c);
    cout << "\nD: "<< 7-b*d/b;
    cout << "\nE: " << 7+c*(-d/b);
    cout << "\nF: "<< 2*b%a+c+1;
    cout << "\nG: "<< 7+e%(a+b);

    return 0;
}
