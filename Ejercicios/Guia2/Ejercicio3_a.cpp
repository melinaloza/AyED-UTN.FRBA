#include <iostream>

using namespace std;

int main(){

int cantidad;

cout << "Ingrese un numero menor a 100: ";
cin >> cantidad;

int nums[cantidad];
int minimo=nums[0];

for(int i=0; i < cantidad; i++){
    cout << "Ingresar numero: ";
    cin >> nums[i];

    if (nums[cantidad-1]==0){
        cout << "salio por 0";
        break;
    }

    if(nums[i]< minimo){
        minimo=nums[i];
    }
}

cout << "Valor minimo:  " << minimo << endl;

for(int i=0; i < cantidad; i++){
    if (minimo == nums[i]){
        cout << "Posicion minimo: " << i << endl;
    }
}

return 0;
}
