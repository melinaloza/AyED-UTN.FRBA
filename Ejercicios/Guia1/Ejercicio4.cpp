#include <iostream>

using namespace std;

int main()
{
    int lado1,lado2,lado3;
    cout << "Ingrese valor del lado 1" << endl;
    cin >> lado1;
    cout << "Ingrese valor del lado 2" << endl;
    cin >> lado2;
    cout << "Ingrese valor del lado 3" << endl;
    cin >> lado3;

    if ((lado1 + lado2 > lado3) && (lado2+ lado3 > lado1) && (lado3 + lado1 > lado2)){
        cout << "Forma un triangulo" << endl;
    }else{
        cout << "No forma un triangulo" << endl;
    }
    return 0;
}
