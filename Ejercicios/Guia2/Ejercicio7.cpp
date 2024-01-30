#include <iostream>
using namespace std;

void inicializarVector(int vec[], int tam){
    for(int i=0; i < tam; i++){
        vec[i]= 0;
    }
return;
}

int aprobados(int vec[], int tam){
    int cantAprobados=0;
    for(int i =0; i < tam; i++){
        if(i+1 > 5 && i+1 < 11){
            cantAprobados+=vec[i];
        }
    }
return cantAprobados;
}

int desaprobados(int vec[], int tam){
    int cantDesaprobados=0;
    for(int i =0; i < tam; i++){
        if(i+1 > 0 && i+1 < 6){
            cantDesaprobados+=vec[i];
        }
    }
return cantDesaprobados;
}


int main(){

int cantcursos;
int codigo;
int cantalumnos;
int legajo;
int nota;
int vecNotas[10];
inicializarVector(vecNotas, 10);

cout << "Ingresar la cantidad de cursos que tiene la catedra de algoritmos: ";
cin>> cantcursos;

for(int i=0;i < cantcursos; i++){
    cout << "Codigo de curso: ";
    cin >> codigo;
    cout << "cantidad de alumnos: ";
    cin >> cantalumnos;

    for(int j=0; j < cantalumnos; j++){
        cout << "Legajo: ";
        cin >> legajo;
        cout << "Nota: ";
        cin >> nota;
        vecNotas[nota-1]++;
    }

    for(int k=0; k < 10; k++){
        cout << "Nota: " << k+1 << " cantidad de alumnos: " << vecNotas[k] << endl;
    }

    int cantidadAprobados=aprobados(vecNotas,10);
    cout << "La cantidad total de alumnos aprobados es: " << cantidadAprobados << endl;
    int cantidadDesaprobados=desaprobados(vecNotas,10);
    cout << "La cantidad total de alumnos desaprobados es: " << cantidadAprobados << endl;
}
return 0;
}
