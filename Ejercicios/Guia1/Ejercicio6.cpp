#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout << "Ingrese edad" << endl;
    cin >> edad;

    if (edad <= 12){
        cout << "MENOR" << endl;
    }
    else if (edad > 13 && edad < 18){
        cout << "CADETE" << endl;
    }
    else if (edad > 18 && edad < 26){
        cout << "JUVENIL" << endl;
    }
    else{
        cout << "MAYOR" << endl;
    }
    return 0;
}
