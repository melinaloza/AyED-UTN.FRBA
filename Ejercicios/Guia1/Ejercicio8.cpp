#include <iostream>

using namespace std;

int main()
{
    int i;
    int contador=0;
    int sumatoriaMayoresA100=0;
    float sumatoriaMenoresA10=0;
    float promedioMayoresA100;
    float numero;
    for (i=0; i < 50; i++){
        cout << "Ingrese un numero" << endl;
        cin >> numero;
        if (numero > 100 ){
            sumatoriaMayoresA100+=numero;
            contador++;
        }else if(numero < -10){
            sumatoriaMenoresA10+=numero;
        }
    }
    promedioMayoresA100= sumatoriaMayoresA100 / contador;
    cout << "Promedio de numeros mayores a 100: " << promedioMayoresA100 << endl;
    cout << "Sumatoria de numeros menores a -10: " << sumatoriaMenoresA10 << endl;
    return 0;
}
