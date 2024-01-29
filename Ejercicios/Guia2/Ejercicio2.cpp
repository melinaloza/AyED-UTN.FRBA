#include <iostream>
using namespace std;

int main(){

int cantidad;

cout << "Ingrese un numero menor a 30: ";
cin >> cantidad;

while (cantidad > 30)
{
    cout << "Vuelva a ingresar un numero menor a 30 porfavor: ";
    cin >> cantidad;
}

int nums[cantidad];

for(int i=0; i < cantidad; i++){
    cout << "Ingresar numero: ";
    cin >> nums[i];
}

if(nums[cantidad-1] < 10){
    for (int i = 0; i < cantidad; i++)
    {
        if (nums[i] < 0 ){
            cout << "numero negativo: " << nums[i] << endl;
        }
    }
}
else{
     for (int i = 0; i < cantidad; i++)
    {
        if (nums[i] > 0 ){
        cout << "numero positivo: " << nums[i] << endl;
        }
    }
}


return 0;
}

