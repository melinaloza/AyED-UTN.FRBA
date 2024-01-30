#include <iostream>

using namespace std;

void cargarVector(float vec[], int dim){
    for(int i= 0; i < dim ; i++){
        cout << "Ingresar valor: ";
        cin >> vec[i];
    }
}

void mostrarVector(float vec[], int dim){

for(int i= 0; i < dim ; i++){
    cout << "vec[" << i << "]= " << vec[i] << endl;
}
}

int main()
{
    int n;
    cout << "Ingrese un numero < 25: ";
    cin >> n;
    float vecA[n];
    float vecB[n];
    float vecC[n];

    cargarVector(vecA,n);
    cargarVector(vecB,n);

    for(int j=0; j < n ; j++){
        if((j % 2) !=0 ){  //es impar
            vecC[j]= vecA[j];
        }
        else if((j % 2 ) == 0 ){ //es par
            vecC[j]= vecB[j];
            }
        }
    cout << "Mostrando vector C: " << endl;
    mostrarVector(vecC,n);
    return 0;
}
