#include <iostream>

using namespace std;

int main()
{
    int n;
    int i;
    cout << "Ingrese una cantidad < 30: " << endl;
    cin >> n;

    int vec[n];
    int num=0;
    for(i=0; i < n; i ++){
       vec[i] = num;
       num = num + 2;
    }
    cout << "Recorro el vector: " << endl;
    for(i=0; i < n ; i++){
          cout <<"vec["<< i << "]= " << vec[i] << endl;
    }


    return 0;
}
