#include <iostream>

using namespace std;

int main()
{
    int L1,L2,L3;
    cout << "Ingrese el valor del lado 1" << endl;
    cin >> L1;
    cout << "Ingrese el valor del lado 2" << endl;
    cin >> L2;
    cout << "Ingrese el valor del lado 3" << endl;
    cin >> L3;

    if (L1== L2 && L2==L3 && L3==L1){
        cout << "Triangulo equilatero" << endl;
    }
    else if( (L1== L2 && (L3 != L1)) || (L2== L3 && (L1 != L2)) || (L1== L3 && (L2 != L1))){
         cout << "Triangulo isosceles" << endl;
    }
    else{
        cout << "Triangulo escaleno" << endl;
    }
    return 0;
}

/*
En realidad deberia verificar que el lado diferente sea diferente para los demas lados,
pero como es lo mismo porque esos lados restantes son iguales, basta con verificar uno solo.
Deberia ser de esta manera:
else if( L1= L2 && (L3 != L1 && L3 != L2) || L2= L3 && (L1 != L2 && L1 != L3) || L1= L3 && (L2 != L1 && L2 != L3){
*/
