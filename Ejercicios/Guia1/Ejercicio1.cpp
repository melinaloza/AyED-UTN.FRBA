#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;

    cout << "Ingrese valor A" << endl;
    cin >> a;
    cout << "Ingrese valor B" << endl;
    cin >> b;

    int suma = a+b;
    int resta= a-b;
    int producto= a*b;
    int division=a/b;

    cout << "Resultado Suma: " << suma << endl;
    cout << "Resultado Resta: " << resta << endl;
    cout << "Resultado Producto: " << producto << endl;

    if (b==0){
        cout << "No puede dividir por cero" << endl;
        return 1;
    }else{
        cout << "Resultado Division: " << division << endl;
    }

return 0;
}
