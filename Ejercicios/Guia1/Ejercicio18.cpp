#include <iostream>

using namespace std;

void cuotaTelefonica(int abono, int minslibres, int cargoxmin, int cantmins){

    int minutosExcedidos;
    int montoAbonar;
    int montoAbonarConIVA;

    if (cantmins > minslibres){
        minutosExcedidos= cantmins - minslibres;
    }

    montoAbonar= abono + (minutosExcedidos*cargoxmin);
    montoAbonarConIVA= montoAbonar * 1.21;

    cout << "Cantidad de minutos excedidos: " << minutosExcedidos << endl;
    cout << "Monto total a abonar: " << montoAbonarConIVA << endl;
}


int main()
{
    int abono,minsLibres,cantMins,cargoPorMinuto;
    cout << "Ingresar costo del abono telefonico ";
    cin >> abono;
    cout << "Ingresar la cantidad de minutos libres que ofrece el abono ";
    cin >> minsLibres;
    cout << "Ingresar la cantidad de minutos utilizados por el abonado ";
    cin >> cantMins;
    cout << "Ingresar el cargo por minuto excedente ";
    cin >> cargoPorMinuto;

    cuotaTelefonica(abono,minsLibres,cargoPorMinuto,cantMins);

    return 0;
}
