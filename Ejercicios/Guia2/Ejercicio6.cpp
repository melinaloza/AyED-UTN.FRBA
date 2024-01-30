/*
Nota: Entiendo que los codigos de deporte van del 1 al 20, porque son 20 deportes
distintos que existen en total. Y los codigos de socio pueden ser cualquier numero.
*/

#include <iostream>

using namespace std;

void inicializarVector(int vec[], int tam){
    for(int i=0; i < tam; i++){
        vec[i]= 0;
    }
}

int mayorInscriptos(int vec[], int dim){
    int mayor=0;
    int posCodigoMayor=0;
    for(int i=0; i < dim; i++){
        if(vec[i] >= mayor){
                mayor= vec[i];
                posCodigoMayor= i+1; //le sumo 1 porque los codigos van del 1 al 20 (no del 1 al 19 como las pos del vector)
        }
    }
return posCodigoMayor;
}

void mostrarInscriptos( int vec[], int tam){
    for(int i=0; i < tam; i++){
        cout << "Codigo deporte: " << i+1 << " ---- " << vec[i] << " inscriptos" << endl;
    }
}

int main()
{
    int socio;
    int codigo;
    int vecdeportes[20];

    inicializarVector(vecdeportes,20);
    cout << "-------Bienvenido al Sistema de inscripciones de socios--------" << endl;
    cout << "Ingresar numero socio: ";
    cin >> socio;

    while(socio != 0){
        cout << "Ingresar codigo del deporte: ";
        cin >> codigo;
        vecdeportes[codigo-1]++;
        cout << "Ingresar numero de socio: ";
        cin >> socio;
    }
    mostrarInscriptos(vecdeportes,20);
    int mayor= mayorInscriptos(vecdeportes,20);

    cout << "Codigo deporte con el mayor cant de inscriptos: " << mayor <<endl;

    return 0;
}
