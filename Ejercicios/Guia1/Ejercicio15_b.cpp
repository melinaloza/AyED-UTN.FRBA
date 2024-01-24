#include <iostream>

using namespace std;

int main()
{
    int i =0;
    int contadorCero=0;
    int sumatoriaPositivos=0;
    int sumatoriaNegativos=0;
    int promedioPositivos;
    int contPositivos=0;
    int num;
    int n;

    cout << "Ingresar la cantidad de valores: " << endl;
    cin >> n;

    for (i=0; i < n; i++){
        cout << "Ingresar numero" << endl;
        cin >> num;
        if(num == 0){
            contadorCero++;
        }
        if (num > 0){
            sumatoriaPositivos+=num;
            contPositivos++;
        }
        if(num < 0){
            sumatoriaNegativos+=num;
        }
    }

    promedioPositivos= sumatoriaPositivos/contPositivos;
    cout << "promedio de valores positivos: " <<  promedioPositivos << endl;
    cout << "sumatoria de valores negativos: " <<  sumatoriaNegativos << endl;
    cout << "Cantidad de valores en cero: " <<  contadorCero << endl;

    return 0;
}
