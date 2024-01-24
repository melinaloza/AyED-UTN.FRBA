#include <iostream>

using namespace std;

int main()
{
    int fecha;
    cout << "Ingrese numero entero AAAAMMDD" << endl;
    cin >> fecha;

    int anio= fecha / 10000;
    int mes= (fecha % 10000)/100;
    int dia= (fecha % 10000)% 100;

    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    return 0;
}
