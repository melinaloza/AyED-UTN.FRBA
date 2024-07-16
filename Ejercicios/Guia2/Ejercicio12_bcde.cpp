#include <iostream>

using namespace std;

struct Persona{

char nombre[20];
char apellido[20];
};

struct Nota{

int nota1;
int nota2;
int nota3;
};

struct Registro{

int legajo;
Persona apellidoNombre;
Nota calificaciones;
};

void cargarVector( Registro regs[], int tam){
    for(int i=0; i < tam; i++){
        cout <<"Ingresar Legajo: ";
        cin >> regs[i].legajo;
        cout << "Ingresar Nombre: ";
        cin >> regs[i].apellidoNombre.nombre;
        cout << "Ingresar Apellido: ";
        cin >> regs[i].apellidoNombre.apellido;
        cout << "Ingresar Nota1: ";
        cin >> regs[i].calificaciones.nota1;
        cout << "Ingresar Nota2: ";
        cin >> regs[i].calificaciones.nota2;
        cout << "Ingresar Nota3: ";
        cin >> regs[i].calificaciones.nota3;
    }
}

void buscarPosicionSegunLegajo(Registro regs[], int tam, int legajoBuscado){

int posBuscada=0;
for(int i=0; i < tam; i++){
    if(regs[i].legajo == legajoBuscado){
        posBuscada= i;
        cout << "el legajo " << legajoBuscado << "tiene la posicion: " << posBuscada << endl;
        cout << "Sus calificaciones son: " << endl;
        cout << "Nota 1 " << regs[i].calificaciones.nota1 << " Nota 2: " << regs[i].calificaciones.nota2 << " Nota 3: " << regs[i].calificaciones.nota3 << endl;
    }
}
}

void buscarPosicionSegunApellido(Registro regs[], int tam){

char apellido[20];
int posBuscada=0;

cout << "Ingrese el apellido que quiere buscar: " << endl;
cin >> apellido;

for(int i=0; i < tam; i++){
    if(regs[i].apellidoNombre.apellido == apellido){
        posBuscada= i;
        cout << "el apellido " << apellido << "tiene la posicion: " << posBuscada << endl;
        cout << "su legajo es: " << regs[i].legajo;
        cout << "su nombre es: " << regs[i].apellidoNombre.nombre;
        cout << "Sus calificaciones son: " << endl;
        cout << "Nota 1 " << regs[i].calificaciones.nota1 << " Nota 2: " << regs[i].calificaciones.nota2 << " Nota 3: " << regs[i].calificaciones.nota3 << endl;
    }
}
}

void ordenarVectorSegunLegajo( Registro regs[], int tam){

    int aux;
    for(int i=0; i < tam; i++){
        for(int j=0; i < tam; j++){
            if(regs[j].legajo > regs[j+1].legajo){
                aux= regs[j].legajo;
                regs[j].legajo= regs[j+1].legajo;
                regs[j+1].legajo=aux;
            }
        }
    }

}

void busquedaBinariaSegunLegajo( Registro regs[], int tam){



}




int main()
{
    Registro regs[20];
    cargarVector(regs,20);
    buscarPosicionSegunLegajo(regs, 20, 456789);
    buscarPosicionSegunApellido(regs,20);
    ordenarVectorSegunLegajo(regs,20);




    return 0;
}
