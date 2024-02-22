#include <iostream>

using namespace std;

int main()
{
    int mult[11][11];
    for(int i=0; i < 11; i++){
        for(int j=0; j < 11; j++){
            mult[i][j]= i*j;
        }
    }
    cout << "Mostrar tablas de multiplicar: " << endl;
    for(int i=0; i < 11; i++){
        for(int j=0; j < 11; j++){
            cout << " " << i <<" * " << j << " = " << mult[i][j] << endl;
        }
    }
    return 0;
}
