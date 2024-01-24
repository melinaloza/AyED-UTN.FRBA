#include <iostream>
#include <cstring>

using namespace std;

int main(){

char nombre[10];
string nombreMasViejo;
string nombreMasJoven;
int fecha, fechaActual;
int anioPersona;
int anioActual;
int edadPersona;
int edadMasViejo=0;
int edadMasJoven=999;

cout << "Ingrese la fecha actual del dia en formato AAAAMMDD: ";
cin >> fechaActual;

anioActual= fechaActual/10000;


while(strcmp(nombre,"FIN") !=0 ){
    cout << "Ingrese nombre de la persona: ";
    cin >> nombre;
    if (strcmp(nombre, "FIN") == 0) {
        break; // Salgo del bucle si se ingresa "FIN"
    }
    cout <<"Ingrese fecha de nacimiento de la persona: ";
    cin >> fecha;

    anioPersona= fecha/10000;

    edadPersona= anioActual - anioPersona;

    if(edadPersona > edadMasViejo){
        edadMasViejo=edadPersona;
        nombreMasViejo=nombre;
    }
    if(edadPersona < edadMasJoven){
        edadMasJoven=edadPersona;
        nombreMasJoven=nombre;
    }
}

cout << "La persona de edad mayor a todas las demas es: " << nombreMasViejo << endl;
cout << "La persona de edad menor a todas las demas es: " << nombreMasJoven << endl;

return 0;
}
