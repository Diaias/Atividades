using namespace std;
#include <iostream>

int main()
{
    float x;
    float y;

    cout << "Digite a coordenada X:\n";
    cin >> x;

    cout << "Digite a coordenada Y:\n";
    cin >> y;

   if(x > 0 && y > 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra no primeiro quadrante";
   }else if(x < 0 && y < 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra no terceiro quadrante";
   }else if(x > 0 && y < 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra no quarto quadrante";
   }else if(x < 0 && y > 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra no segundo quadrante";
   }else if(x == 0 && y != 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra sobre o eixo x";
   }else if(x != 0 && y == 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra sobre o eixo y";
   }else if(x == 0 && y == 0){
        cout << "O ponto ("<<x<<","<<y<<") se encontra no meio do plano cartesiano";
   }

    return 0;
}
