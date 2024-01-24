#include <iostream>

using namespace std;

int main()
{
    int i, tipo,multa;
    string motivo;
    char gravedad;
    int acumuladorL=0;
    int acumuladorM=0;
    int acumuladorG=0;
    int cantInfracciones=0;

    for (i=0; i < 20; i++){
      cout <<"Tipo de infraccion: " << endl;
      cin >>  tipo;
      cout << "motivo de infraccion: " << endl;
      cin >> motivo;
      cout << "multa de infraccion: " << endl;
      cin >> multa;
      cout << "Gravedad de la infraccion" << endl;
      cin >> gravedad;

      switch (gravedad){

      case 'L':
          acumuladorL+=multa;
          break;
      case 'M':
          acumuladorM+=multa;
          break;
      case 'G':
          acumuladorG+=multa;
          break;
      default:
        break;
      }

      if ((tipo == 3 || tipo == 4) && gravedad == 'G'){
        cantInfracciones++;
      }
    }

    if (cantInfracciones > 3){
        cout << "Clausurar fabrica" <<  endl;
    }
    cout << "Total multa a pagar de gravedad L: " << acumuladorL << endl;
    cout << "Total multa a pagar de gravedad M: " << acumuladorM << endl;
    cout << "Total multa a pagar de gravedad G: " << acumuladorG << endl;
    return 0;
}

