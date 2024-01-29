#include <iostream>

using namespace std;

int main(){

int cantidad;

cout << "Ingrese un numero menor a 100: ";
cin >> cantidad;

int nums[cantidad];
int producto=1;

for(int i=0; i < cantidad; i++){
    cout << "Ingrese numero: ";
    cin >> nums[i];

    if(nums[cantidad-1]== 0){
        cout << "salio por cero"<< endl;
        break;
    }
    if((nums[i] % 2) != 0 && i % 2 == 0)
            producto= producto * nums[i];
}

cout << "producto de los numeros impares con posicion impar: " << producto << endl;
return 0;
}
