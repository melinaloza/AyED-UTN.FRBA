#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumno{
    int legajo;
	int nota1;
	int nota2;
};

struct Datos{
    int legajo;
    float promedio;

};

int main()
{
Alumno raux;
Datos rdatos;

FILE * Alum;
Alum = fopen("Curso.dat","wb");

cout << "Ingresar un numero de legajo o 0 para terminar" << endl;
cin >> raux.legajo;

while(raux.legajo > 0){
    cout << "Ingrese nota primer parcial" << endl;
    cin >> raux.nota1;
    cout << "Ingrese nota segundo parcial" << endl;
    cin >> raux.nota2;
    rdatos.legajo= raux.legajo;
    rdatos.promedio= (raux.nota1 + raux.nota2)/2;
    fwrite(&rdatos,sizeof(struct Datos),1,Alum);

    cout << "Ingresar un numero de legajo o 0 para terminar" << endl;
	cin >> raux.legajo;
}
fclose(Alum);

/*
No lo pide el ejercicio, pero si quisiera leer lo que se guardo en el archivo,
realizo lo siguiente: */

Alum= fopen("Curso.dat", "rb");
fread(&rdatos,sizeof(struct Datos),1,Alum);
while(!feof(Alum)){
    cout << "Legajo Alumno: " << rdatos.legajo << " Promedio: " << rdatos.promedio << endl;
    fread(&rdatos,sizeof(struct Datos),1,Alum);
}
fclose(Alum);
return 0;

}
