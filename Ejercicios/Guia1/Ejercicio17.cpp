#include <iostream>

using namespace std;

float calcularPorcentaje(float porcentaje, int A){

return (porcentaje*A) / 100;
}


string Tendencia(int A, int B){
    if(B-A < 0){
        return "decreciente";
    }
    else
        if(B-A < calcularPorcentaje(2,A)){
            return "Estable";
        }
        else
            if (B-A < calcularPorcentaje(5,A)){
                return "Leve ascenso";
            }
            else{
                return "En ascenso";
            }
}

int main()
{
    float A,B;
    cout << "Ingrese un numero: " << endl;
    cin >> A;
    cout << "Ingrese otro numero: " << endl;
    cin >> B;
    cout << "Resultado: " << Tendencia(A,B)<< endl;
    return 0;
}
