#include <iostream>

using namespace std;

void cargarMatriz(int m[][50], int filas, int columnas){

for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            cout << "Ingrese m[" << i << "][" << j << "]= ";
            cin >> m[i][j];
        }
    }
}

void mostrarMatrizPorFila(int m[][50], int filas, int columnas){

for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            cout << " m[" << i << "][" << j << "]= " << m[i][j] << endl;
        }
    }
}

void mostrarMatrizPorColumna(int m[][50], int filas, int columnas){

for(int j=0; j < columnas; j++){
        for(int i=0; i < filas; i++){
            cout << " m[" << i << "][" << j << "]= " << m[i][j] << endl;
        }
    }
}

int sumatoria( int m[][50], int filas, int columnas){

int sumatoria=0;

for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            sumatoria+= m[i][j];
        }
    }
return sumatoria;
}

void encontrarMaximo(int m[][50], int filas, int columnas){

int maximo = m[0][0];
int filaMax= 0;
int columnaMax=0;

for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            if(m[i][j] > maximo){
                maximo= m[i][j];
                filaMax=i;
                columnaMax=j;
            }
        }
    }
    cout << "El maximo es: " << maximo << endl;
    cout << "Se encuentra en  la fila: " << filaMax << " y la columna: " << columnaMax << endl;
}

void encontrarMinimoPorFila(int m[][50], int filas, int columnas){

int minimo= m[0][0];
for(int i=0; i < filas; i++){
        for(int j=0; j < columnas; j++){
            if(m[i][j]< minimo){
                    minimo=m[i][j];
            }
        }
        cout << "El minimo de la fila " << i << " es: " << minimo << endl;
        minimo=999; //para que se reinicie para la prox yno quede el valor anterior guardado
}
}

void encontrarMaximoPorColumna(int m[][50], int filas, int columnas){

int maximo=m[0][0];

for(int j=0; j < columnas; j++){
        for(int i=0; i < filas; i++){
            if(m[i][j] > maximo){
                maximo=m[i][j];
            }
        }
            cout << "El maximo de la columna " << j << " es: " << maximo << endl;
            maximo=0; //para que se reinicie con valor 0 para la prox columna y no quede el valor anterior guardado
        }
}

/*
Para recorrer la diagonal principal, debe ser una matriz cuadrada nxn.
Entonces para recorrerla uso un contador i que se mueva para la misma
posicion en fila y en columna.
*/
int contarPositivosDiagonal(int m[][50], int filas, int columnas){  //Diagonal Principal

int contador=0;
int j=0;

for(int i=0; i < filas && i < columnas; i++){
    if(m[i][j]> 0){
        contador++;
    }
    j++;
}
return contador;
}

int contarNegativosDiagonal(int m[][50], int filas, int columnas){ //Diagonal Secundaria

int contador=0;
int j= columnas-1;

for (int i=0; i < filas ; i++){
    if(m[i][j]< 0){
        contador++;
    }
    j--;
}
return contador;
}


int main()
{
    int n;
    cout << "Ingresar un valor < 50: ";
    cin >> n;
    int matriz[50][50];
    cout << "Cargar la matriz" << endl;
    cargarMatriz(matriz,n,n);
    cout << "Mostrar matriz por fila: " << endl;
    mostrarMatrizPorFila(matriz,n,n);
    cout << "Mostrar matriz por columna: " << endl;
    mostrarMatrizPorColumna(matriz,n,n);
    int sumatoriaTotal= sumatoria(matriz,n,n);
    cout << "Sumatoria de sus elementos: " << sumatoriaTotal << endl;
    int totalElementos= n*n;
    int promedio= sumatoriaTotal/ totalElementos;
    cout << "valor promedio total: " << promedio << endl;
    cout << "Mostrando elemento maximo y su ubicacion: " << endl;
    encontrarMaximo(matriz,n,n);
    encontrarMinimoPorFila(matriz,n,n);
    encontrarMaximoPorColumna(matriz,n,n);
    int contadorPositivos= contarPositivosDiagonal(matriz,n,n);
    cout << "Cantidad de positivos en la diagonal principal: " << contadorPositivos << endl;
    int contadorNegativos= contarNegativosDiagonal(matriz,n,n);
    cout << "Cantidad de negativos en la diagonal secundaria: " << contadorNegativos << endl;

    return 0;
}


// m[i][j] el primer corchete siempre son las filas y el segundo corchete son las columnas
