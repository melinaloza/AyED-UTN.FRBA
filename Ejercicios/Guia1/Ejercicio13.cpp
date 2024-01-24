#include <iostream>

using namespace std;

int main()
{
    float valor;
    float maxNegativo=0;
    float minPositivo=9999;
    float minRango;
    float promedio;
    float sumatoria;
    int contador =0;

    while(valor != 0){
        cout <<"Ingrese un valor" << endl;
        cin >> valor;
        if(valor == 0){
            break;
        }
        if (valor > -17.3 && valor < 26.9){
            if(valor < minRango){
                 minRango=valor;
            }
        }

        if(valor < 0){
            if(valor > maxNegativo){
                 maxNegativo= valor;
            }
        }

        if(valor > 0){
            if(valor < minPositivo){
                 minPositivo= valor;
            }
        }

        sumatoria +=valor;
        contador++;
    }
    promedio= sumatoria/contador;
    cout << "Promedio de los numeros ingresados: " <<promedio << endl;
    cout << "Valor maximo negativo: " << maxNegativo << endl;
    cout << "Valor minimo positivo:  " << minPositivo << endl;
    cout << "Valor minimo dentro del rango -17.3 y 26.9:  " << minRango << endl;
    return 0;
}
