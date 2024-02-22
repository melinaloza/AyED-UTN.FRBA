#include <iostream>

using namespace std;

void inicializarVector(int vec[], int tam){
    for(int i=0; i < tam; i++){
        cout << "Ingrese valor: ";
        cin >> vec[i];
    }
return;
}

void ordenamientoBurbuja(int vec[], int dim){
    int aux;
    for(int i=0; i < dim; i++){
            for(int j=0; j < dim; j++){
                if(vec[j]> vec[j+1]){
                    aux= vec[j];
                    vec[j]= vec[j+1];
                    vec[j+1]=aux;
                }
            }
    }
}

int main()
{
    int cant;
    cout << "Ingrese una cantidad < 50: " << endl;
    cin >> cant;
    int vec[cant];
    inicializarVector(vec,cant);
    ordenamientoBurbuja(vec,cant);

    cout << "orden ascendente: " << endl;
    for(int i=0; i < cant; i++){
        cout << vec[i] << endl;
    }

    cout << "orden descendente: " << endl;
    for(int j=cant-1; j >=0; j--){
        cout << vec[j] << endl;
    }
    return 0;
}
