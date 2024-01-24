#include <iostream>
using namespace std;

int main(){

int valor=0;
int valorAnterior;
int contadorCero=0;
int sumatoriaPositivos=0;
int sumatoriaNegativos=0;
int cantidadPositivos=0;
int promedio;


cout << "Valor a ingresar: ";
cin >> valorAnterior;

while(true){
    cout << "Valor a ingresar: ";
    cin >> valor;

    if(valor == valorAnterior){
        break; //salgo del while
    }

    if (valor == 0){
        contadorCero++;
    }

    if(valor > 0){
        sumatoriaPositivos+=valor;
        cantidadPositivos++;
    }

    if (valor<0){
        sumatoriaNegativos+=valor;
    }

    valorAnterior=valor;

}

promedio= sumatoriaPositivos/cantidadPositivos;

cout << "Cantidad de valores que son cero: " << contadorCero << endl;
cout << "Promedio de valores positivos: " << promedio << endl;
cout << "Sumatoria valores negativos: " << sumatoriaNegativos << endl;

return 0;
}
