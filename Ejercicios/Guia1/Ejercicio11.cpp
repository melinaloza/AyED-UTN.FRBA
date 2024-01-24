#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    int valor;
    int mayor= 0;
    int menor=9999; // no encuentro una mejor manera
    int posMayor=0;
    int posMenor=0;
    cout << "Ingresar la cantidad de valores: " << endl;
    cin >> n;
    for(i=0; i < n; i++){
        cout << "valor: " << endl;
        cin >> valor;
        if(valor > mayor){
            posMayor= i;
            mayor=valor;
        }
        if(valor < menor){
            posMenor=i;
            menor=valor;
        }
    }

    cout << "el numero mayor: " << mayor << " se encuentra en la posicion: " << posMayor << endl;
    cout << "el numero menor: " << menor << " se encuentra en la posicion: " << posMenor << endl;

    return 0;
}
