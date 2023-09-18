#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

// struct para los rubros
struct Negocio{
    unsigned zona;
    char nombrecomercio[30];
};

// prototipos de funciones
void inicializarmatriz(int m[][4], int cf, int cc);
void inicializarvectorrubros(Negocio n[], int ce);
void cargardatosmenu (int mneg [6][4], Negocio heladeria[], Negocio pizzeria[], Negocio bebidas[], Negocio parrilla[]);
void ingresarval(int d, int h);
void mostrarmatriz(int mat[6][4]);
void ordenar(Negocio v[],int tam);

int main()
{
    int dim2=4;
    int mneg[6][4]; // declaro la matriz para almacenar los datos de cant negocios  x rubro x zona con sus respectivas dimensiones
    inicializarmatriz(mneg,6,4); //inicializo la matriz en cero
    int dim1=60; // declaro la dimension maxima de comecios
    Negocio heladeria[dim1]; // declaro vectores de cada archivo del tipo negocio xq son los datos de negocio que va a tener cad vector
    Negocio pizzeria[dim1];
    Negocio bebidas[dim1];
    Negocio parrilla[dim1];
    inicializarvectorrubros(heladeria,dim1); //inicializo los vectores de cada rubro en cero para que no haya basura
    inicializarvectorrubros(pizzeria,dim1);
    inicializarvectorrubros(bebidas,dim1);
    inicializarvectorrubros(parrilla,dim1);
    cargardatosmenu(mneg,heladeria,pizzeria,bebidas,parrilla);

    // ordeno cada uno
    ordenar(heladeria,60);
    ordenar(pizzeria,60);
    ordenar(parrilla,60);
    ordenar(bebidas,60);



     cout<<"A continuacion se muestra nombre y zona de los negocios segun su rubro:"<<endl;
     cout <<" si hay lugares donde esta vacio,osea sin decir nada, entonces no se incorporaron comercios en ese rubro" << endl;
     cout << endl;

        // guardo datos en cada archivo correspondiente

         cout<<"RUBRO HELADERIAS" <<endl;
        int i=0;
        FILE *arch1=fopen("Heladerias.dat","wb");
        while(i<dim1){
            if(heladeria[i].zona!=0){
            cout<<"Nombre comercio: "<<heladeria[i].nombrecomercio<<" Zona: "<<heladeria[i].zona<<endl;
            fwrite(&heladeria[i],sizeof(Negocio),1,arch1);
            }
        i++;
        }
        fclose(arch1);


        cout<<"RUBRO PIZZERIA" <<endl;
        int j=0;
        FILE *arch2=fopen("Pizzeria.dat","wb");
        while(j<dim1){
            if(pizzeria[j].zona!=0){
            cout<<"Nombre comercio: "<<pizzeria[j].nombrecomercio<<"Zona: "<<pizzeria[j].zona<<endl;
            fwrite(&pizzeria[i],sizeof(Negocio),1,arch2);
            }
        j++;
        }
        fclose(arch2);


         cout<<"RUBRO BEBIDAS" <<endl;
        int k=0;
        FILE *arch3=fopen("bebidas.dat","wb");
        while(k<dim1){
            if(bebidas[k].zona!=0){
            cout<<"Nombre comercio: "<< bebidas[k].nombrecomercio<<"Zona: "<<bebidas[k].zona<<endl;
            fwrite(&bebidas[k],sizeof(Negocio),1,arch3);
            }
        k++;
        }
        fclose(arch3);


         cout<<"RUBRO PARRILLA" <<endl;
        int p=0;
        FILE *arch4=fopen("Parrilla.dat","wb");
        while(p<dim1){
            if(parrilla[p].zona!=0){
            cout<<"Nombre comercio: "<<parrilla[p].nombrecomercio<<"Zona: "<<parrilla[p].zona<<endl;
            fwrite(&parrilla[p],sizeof(Negocio),1,arch4);
            }
        p++;
        }
        fclose(arch4);

    // muestro la matriz de negocios por zonas

    mostrarmatriz(mneg);
    return 0;
}

void ordenar(Negocio v[],int tam){
    int i=0,j;
    Negocio aux;
    bool cambio;
    do{
        cambio=false;
        for(j=0;j<tam-1-i;j++){
            if(strcmp(v[j].nombrecomercio,v[j+1].nombrecomercio)>0){ // si la primera cadena > segunda cadena
                strcpy(aux.nombrecomercio,v[j].nombrecomercio);         // voy copiando de una cadena a otra
                aux.zona=v[j].zona;
                strcpy(v[j].nombrecomercio,v[j+1].nombrecomercio);
                v[j].zona=v[j+1].zona;
                strcpy(v[j+1].nombrecomercio,aux.nombrecomercio);
                v[j+1].zona=aux.zona;
                cambio=true;
            }
        }
        i++;
    }while(i<tam && cambio);
}


int ingresarVal(int d, int h)
{
    int dato;
    do
        cin>>dato;
    while(dato<d || dato>h);
    return dato;
}



void inicializarvectorrubros(Negocio n[], int ce)
{
    for ( int i=0; i < ce ; i++){

            n[i].zona=0;
    }
}


void inicializarmatriz(int m[][4], int cf, int cc)
{
    for(int i=0;i<cf;i++){
        for(int j=0;j<cc;j++){
            m[i][j]=0;
        }
    }

}

void cargardatosmenu( int mneg [6][4], Negocio heladeria[60], Negocio pizzeria[60], Negocio bebidas[60], Negocio parrilla[60])
{
    int rubro;
    cout<<"Ingrese el numero de rubro " << endl;
    cout << "0= salir -- 1= Heladeria -- 2= Pizzeria -- 3= Bebidas -- 4= Parrilla " <<endl;
    cin>> rubro;
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    //rubro= ingresarval(0,4)
    while(rubro!=0){ // la carga de datos del usuario finaliza cuando el rubro es cero
        switch(rubro){
            case 1:

                cout << " Ingrese numero de zona del 1 a 6: " << endl;
                cin >>heladeria[i].zona;
                cout << "pos vec " << i << " heladeria zona " << heladeria[i].zona << endl;
                if(mneg[heladeria[i].zona-1][rubro-1]<10){

                cout<<"Ingrese el nombre del comercio: ";
                cin.ignore();
                cin.getline(heladeria[i].nombrecomercio,40);
                mneg[heladeria[i].zona-1][rubro-1]++;
                i++;
                }
                else{
                cout<<"Esta zona ya tiene 10 negocios de ese rubro"<<endl;
                heladeria[i].zona=0;
                }

            break;

            case 2:

                cout << " Ingrese numero de zona del 1 a 6: " << endl;
                cin >>pizzeria[j].zona;
                 cout << "pos vec " << j << " pizzeria zona " << pizzeria[j].zona << endl;
                if(mneg[pizzeria[j].zona-1][rubro-1]<10){

                cout<<"Ingrese el nombre del comercio: ";
                cin.ignore();
                cin.getline(pizzeria[j].nombrecomercio,40);
                mneg[pizzeria[j].zona-1][rubro-1]++;
                j++;
                }
                else{
                cout<<"Esta zona ya tiene 10 negocios de ese rubro"<<endl;
                pizzeria[j].zona=0;
                }


            break;

            case 3:

                cout << " Ingrese numero de zona del 1 a 6: " << endl;
                cin >>bebidas[k].zona;
                if(mneg[bebidas[k].zona-1][rubro-1]<10){

                cout<<"Ingrese el nombre del comercio: ";
                cin.ignore();
                cin.getline(bebidas[k].nombrecomercio,40);
                mneg[bebidas[k].zona-1][rubro-1]++;
                k++;
                }else{
                cout<<"Esta zona ya tiene 10 negocios de ese rubro"<<endl;
                bebidas[k].zona=0;
                }

            break;

            case 4:

                cout << " Ingrese numero de zona del 1 a 6: " << endl;
                cin >>parrilla[l].zona;

                if(mneg[parrilla[l].zona-1][rubro-1]<10){

                cout<<"Ingrese el nombre del comercio: ";
                cin.ignore();
                cin.getline(parrilla[l].nombrecomercio,40);
                mneg[parrilla[l].zona-1][rubro-1]++;
                l++;
                }else{
                cout<<"Esta zona ya tiene 10 negocios de ese rubro"<<endl;
                parrilla[l].zona=0;
                }
            break;
            }

            cout<<"Ingrese el numero de rubro " << endl;
            cout << "0= salir -- 1= Heladeria -- 2= Pizzeria -- 3= Bebidas -- 4= Parrilla " <<endl;
            cin >> rubro;
            //rubro=ingresarVal(0,4);

}
    }


void mostrarmatriz(int mat[6][4])

{
    cout <<"" <<endl;
    cout <<"A continuacion se muestran por cada zona cuantos comercios hay por cada rubro" << endl;
    cout <<"Si alguna zona esta en cero significa que para esa zona y ese rubro no hay comercios" << endl;
    cout << "" << endl;
    cout << "             Z1 Z2 Z3 Z4 Z5 Z6 "<< endl;
    cout <<" heladerias: ";
    for(int i=0;i<6;i++){
        cout << "" << mat[i][0] << "  "  ;
    }
    cout << "" << endl; // espacio
    cout <<" pizzerias:  ";
    for(int i=0;i<6;i++){
        cout << "" << mat[i][1] << "  ";
    }
     cout << "" << endl;
     cout <<" bebidas:    ";

    for(int i=0;i<6;i++){
        cout << "" << mat[i][2] << "  ";
    }
     cout << "" << endl;
    cout <<" parrillas:  ";
    for(int i=0;i<6;i++){
        cout << "" << mat[i][3] << "  ";
    }

    cout << "" << endl;


}




