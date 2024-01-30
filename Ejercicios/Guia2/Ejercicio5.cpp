/*  Nota: Entiendo que al sumar los dos valores de los dados, ese es el numero que vamos
          a contar la cantidad de veces que salio
*/

#include <iostream>
using namespace std;

void inicializarVector(int vec[], int tam){
    for(int i=0; i < tam; i++){
        vec[i]= 0;
    }
}

void mostrarVector(int vec[], int tam){
    int k=0;
    for(int j=2; j < tam; j++){
        cout <<" El numero: " << j << " salio " << vec[k] << " veces" << endl;
        k++;
    }
}

int main(){

int dado1[50];
int dado2[50];
int resultados[11];
int sumatoria;

inicializarVector(resultados,12);

for (int i=0; i < 5; i++){
    cout << "Tirada de dados, ingrese dos valores: ";
    cin >> dado1[i] >> dado2[i];
    sumatoria= dado1[i] + dado2[i];
    resultados[sumatoria-2]++;
}

mostrarVector(resultados,11);

return 0;
}
