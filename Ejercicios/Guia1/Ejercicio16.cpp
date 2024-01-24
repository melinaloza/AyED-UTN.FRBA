#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia(int A, int B){
    return (B-A) *100 / (A+B);
}


int main()
{
    float A,B;
    cout << "Ingrese un numero: " << endl;
    cin >> A;
    cout << "Ingrese otro numero: " << endl;
    cin >> B;
    float resultado= CalcularPorcentajeDiferencia(A,B);
    cout << "Resultado porcentaje: " << resultado << endl;
    return 0;
}


