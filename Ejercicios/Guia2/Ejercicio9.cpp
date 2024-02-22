#include <iostream>

using namespace std;

void ordenamientoPorNombre(string vec[], int dim){
    string aux;
    for(int i=0; i < dim - 1; i++){
            for(int j=0; j < dim - i - 1; j++){
                if(vec[j]> vec[j+1]){
                    aux= vec[j];
                    vec[j]= vec[j+1];
                    vec[j+1]=aux;
                }
            }
    }
}

void ordenamientoPorNombreFecha(string vec1[], int vec2[], int dim){
    string auxnombre;
    int auxfecha;

    for(int i=0; i < dim - 1; i++){
            for(int j=0; j < dim - i - 1; j++){
                if(vec1[j]> vec1[j+1]){
                    auxnombre= vec1[j];
                    vec1[j]= vec1[j+1];
                    vec1[j+1]=auxnombre;

                    auxfecha=vec2[j];
                    vec2[j]= vec2[j+1];
                    vec2[j+1]=auxfecha;
                }
                    else if (vec1[j] == vec1[j + 1] && vec2[j] > vec2[j + 1]) {  // Si los nombres son =, comparar por fecha
                        auxfecha = vec2[j];
                        vec2[j] = vec2[j + 1];
                        vec2[j + 1] = auxfecha;
                    }
            }
    }
}

void ordenamientoPorFechaNombre(int vec1[], string vec2[], int dim){
    string auxnombre;
    int auxfecha;

    for(int i=0; i < dim - 1; i++){
            for(int j=0; j < dim - i - 1; j++){
                if(vec1[j]> vec1[j+1]){
                    auxfecha= vec1[j];
                    vec1[j]= vec1[j+1];
                    vec1[j+1]=auxfecha;

                    auxnombre=vec2[j];
                    vec2[j]= vec2[j+1];
                    vec2[j+1]=auxnombre;
                }
                    else if (vec1[j] == vec1[j + 1] && vec2[j] > vec2[j + 1]) {  // Si los nombres son =, comparar por fecha
                        auxnombre = vec2[j];
                        vec2[j] = vec2[j + 1];
                        vec2[j + 1] = auxnombre;
                    }
            }
    }
}

int main()
{
    int cant;
    cout << "Ingresar una cantidad <= 50: ";
    cin >> cant;

    string nombres[cant];
    int fechas[cant];

    for(int i=0; i < cant; i++){
        cout << "Ingresar nombre: "<< endl;
        cin >> nombres[i];
        cout << "Ingresar fecha: " << endl;
        cin >> fechas[i];
    }

    ordenamientoPorNombre(nombres,cant);
    cout << "ordenado por nombre: " << endl;
    for(int k=0; k < cant; k++){
        cout << nombres[k] << endl;
    }

    ordenamientoPorNombreFecha(nombres,fechas,cant);
    cout << "ordenado por nombre y fecha: " << endl;
    for(int k=0; k < cant; k++){
        cout << "Nombre: " << nombres[k] << " - Fecha: " << fechas[k] <<  endl;
    }

    ordenamientoPorFechaNombre(fechas,nombres,cant);
    cout << "ordenado por fecha y nombre: " << endl;
    for(int k=0; k < cant; k++){
        cout << "Fecha: " << fechas[k] << " - Nombre: " << nombres[k] <<  endl;
    }
    return 0;
}

//no chequeado si anda bien, habria que reveer algunas cosas
