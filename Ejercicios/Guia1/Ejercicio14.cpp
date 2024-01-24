#include <iostream>

using namespace std;

int main()
{

    int sumatoria=0;
    int id, peso,puerto;
    int idMayorPeso;
    int mayorPeso=0;
    int cantPuerto1=0;
    int cantPuerto2=0;
    int cantPuerto3=0;
    int i=0;
    for(i=0; i < 4; i++){
        cout << "Identificacion del contendor: " << endl;
        cin >> id;
        cout << "Peso del contenedor: " << endl;
        cin >> peso;
        cout << "Puerto de arribo: (1|2|3) " << endl;
        cin >> puerto;

        switch(puerto){

            case 1:
                cantPuerto1++;
                break;
            case 2:
                cantPuerto2++;
                break;
            case 3:
                cantPuerto3++;
                break;
            default:
                break;
        }
        sumatoria +=peso;

        if(peso > mayorPeso){
            idMayorPeso=id;
        }
    }

    cout << "Peso total buque a trasladar: " << sumatoria << endl;
    cout << "ID contenedor de mayor peso en el buque: " << idMayorPeso << endl;
    cout << "cantidad contenedores a trasladar en puerto 1: " << cantPuerto1 << endl;
    cout << "cantidad contenedores a trasladar en puerto 2: " << cantPuerto2 << endl;
    cout << "cantidad contenedores a trasladar en puerto 3: " << cantPuerto3 << endl;

    return 0;
}
