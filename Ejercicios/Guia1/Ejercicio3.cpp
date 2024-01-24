#include <iostream>

using namespace std;

int main()
{
    int sumatoria=0;
    int i;
    for (i=2; i < 30 ; i++){
      if ((i % 2) == 0){
            sumatoria= sumatoria + i;
      }
    }
    cout << "resultado: " << sumatoria << endl;
    return 0;
}
