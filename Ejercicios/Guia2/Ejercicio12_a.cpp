#include <iostream>

using namespace std;

struct Fecha{

int dia;
int mes;
int anio;

};


struct Registro{

char nombre[20];
Fecha fechaNacimiento;

};

void cargarVector( Registro regs[], int tam){

    for(int i=0; i < tam; i++){
        cout <<"Ingresar Nombre: ";
        cin >> regs[i].nombre;
        cout << "Ingresar dia nacimiento: ";
        cin >> regs[i].fechaNacimiento.dia;
        cout << "Ingresar mes de nacimiento: ";
        cin >> regs[i].fechaNacimiento.mes;
        cout << "Ingresar anio de nacimiento: ";
        cin >> regs[i].fechaNacimiento.anio;
    }
}

void buscarPosicionDia( Registro regs[], int tam, int pos){

for(int i=0; i <= pos; i++){
    if(i==pos){
        cout << "Posicion: " << i << " campo dia es: " << regs[i].fechaNacimiento.dia << endl;
    }
}

}

void buscarPosicionNombre( Registro regs[], int tam, int pos){

for(int i=0; i <= pos; i++){
    if(i==pos){
        cout << "Posicion: " << i << " campo nombre es: " << regs[i].nombre << endl;
    }
}

}


int main()
{
    Registro regs[10];
    cargarVector(regs,10);
    buscarPosicionDia(regs, 10, 8);
    buscarPosicionNombre(regs,10,0);
    return 0;
}
