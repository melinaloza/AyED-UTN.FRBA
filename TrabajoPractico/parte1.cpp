#include <iostream>
#include <stdio.h>
#include <cstring>
// ejercicio donde se establecen relaciones entre posicion zona -> de acceso directo.

using namespace std;

struct Registro
{
	unsigned dni;
	char nombre[50];
	unsigned zona;
};

//prototipos de funciones
void mostrarZonas(int Vrepxzona[], int c);
void inicializar(int Vrepxzona[],int c);
void  mostrarZonasSinRepartidores(int Vrepxzona[], int c);
int ingresarval( int d, int h);

int main(){

	int cant=6; //variable que sera la cantidad de zonas que hay
	int Vrepxzona[cant]; //vector de la cant de repartidores que hay en c/zona
	inicializar(Vrepxzona,cant); //inicializa todos los repartidores en cero por si quedo algo de basura

	//abre el archivo y carga los datos
		FILE *arch = fopen("Repartidores.dat","wb");
        if(arch==NULL){
		cout<<"ERROR"<<endl;
        } else{
		Registro reg;
			cout<<"Ingrese la zona" << endl;
			cout <<"Rango de: 1 a 6" << endl;
			cout <<"Presione 0 para salir" << endl;
			reg.zona=ingresarval(0,6);

		while(reg.zona!=0){ //el usuario finaliza la carga cuando la zona es cero.
			Vrepxzona[reg.zona-1]+=1;
			cin.ignore(); // antes de poner un getline poner el cin.ignore xq sino se salta el ingreso
			cout<<"Ingresar nombre y apellido del repartidor porfavor: ";
			cin.getline(reg.nombre,50); // getline para que me tome espacios
			cout<<"Ingresar dni del repartidor porfavor: ";
			cin>>reg.dni;
			fwrite(&reg,sizeof(Registro),1,arch);

                    cout<<"Ingrese la zona" << endl;
                    cout <<"Rango de: 1 a 6" << endl;
                    cout <<"Presione 0 para salir" << endl;
                    reg.zona=ingresarval(0,6);

		}
	}
	fclose(arch); //cierra el archivo

	mostrarZonas(Vrepxzona,cant); //lista que muestra la cant de repartidores por zona
	mostrarZonasSinRepartidores(Vrepxzona,cant); // lista que muestra en que zonas no hay repartidores
	return 0;
}


void  mostrarZonasSinRepartidores(int Vrepxzona[], int c){
	cout <<"" << endl;
	cout<<"Zonas sin repartidores: "<<endl;
	for(int i=0;i<c;i++){
		if (Vrepxzona[i]==0){
			cout<<" zona:  "<<i+1<<endl;
		}
	}
}

void inicializar(int Vrepxzona[],int c){
	for (int i=0;i<c;i++){
		Vrepxzona[i]=0;
	}
}

int ingresarval( int d, int h){
int dato;
    cin >> dato;
    while(dato < d || dato>h );
        return dato;
}

void mostrarZonas(int Vrepxzona[], int c){
	cout<<"Cantidad de repartidores por zona: "<<endl;
	for(int i=0;i<c;i++){
		cout<<" En la zona: "<<i+1<<" hay "<< Vrepxzona[i]<<" repartidores "<<endl;
	}
}
