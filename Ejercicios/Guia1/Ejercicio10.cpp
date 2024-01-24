#include <iostream>

using namespace std;

int main()
{
    int sueldo;
    int cant1=0;
    int cant2=0;
    int cant3=0;
    int cant4=0;
    cout << "Ingrese sueldo empleado" << endl;
    cin >> sueldo;
    while(sueldo != 0){
        cout << "Ingrese sueldo empleado" << endl;
        cin >> sueldo;
        if(sueldo < 1520){
            cant1++;
        }else if(sueldo >= 1520 && sueldo < 2780){
            cant2++;
        }else if(sueldo >= 2780 && sueldo < 5999){
            cant3++;
        }else if (sueldo > 5999){
            cant4++;
        }
    }

    cout << "Cantidad de empleados que ganan < $ 1.520: " << cant1 <<endl;
    cout << "Cantidad de empleados que ganan >= $ 1.520 y < $2.780: " << cant2 <<endl;
    cout << "Cantidad de empleados que ganan >= $ 2.780 y < $5.999: " << cant3 <<endl;
    cout << "Cantidad de empleados que ganan > $ 5.999: " << cant4 <<endl;

    return 0;
}
