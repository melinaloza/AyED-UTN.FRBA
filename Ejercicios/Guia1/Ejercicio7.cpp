#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int metros= 1500;
    int velocidad;
    int velocidadJugadorVeloz;
    int cant;
    int tiempo;
    int i;
    char jugador[10+1];
    char jugadorVeloz[10+1];

    cout << "--------------------------------------" << endl;
    cout << "Ingrese la cantidad de participantes" << endl;
    cin >> cant;
    cout << "--------------------------------------" << endl;
    cout << "" << endl;

    cout << "Nombre: " << endl;
    cin >> jugador;
    cout << "tiempo en segundos: " << endl;
    cin >> tiempo;
    velocidad=metros/tiempo;
    cout << "velocidad: " << velocidad << endl;
    velocidadJugadorVeloz=velocidad;
    strcpy(jugadorVeloz,jugador);
    cout << "------------------------"<< endl;
    cout << "" << endl;

    for(i=1; i < cant; i++){
        cout << "Nombre: " << endl;
        cin >> jugador;
        cout << "tiempo en segundos: " << endl;
        cin >> tiempo;
        velocidad=metros/tiempo;
        cout << "velocidad: " << velocidad << endl;
        if (velocidad > velocidadJugadorVeloz){
            velocidadJugadorVeloz= velocidad;
            strcpy(jugadorVeloz,jugador);
        }
    cout << "------------------------"<< endl;
    cout << "" << endl;
    }

    cout << "El jugador mas veloz es: " << jugadorVeloz << endl;
    return 0;
}
