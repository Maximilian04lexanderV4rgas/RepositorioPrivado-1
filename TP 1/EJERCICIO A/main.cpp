#include <iostream>

using namespace std;

int main()
{
    int V ;
    cout << "Ingrese una velocidad como valor numerico (Lectura en Km/h):";
    cin  >> (V) ;
    cout << "Velocidad en Kilometros por hora asignada = " << (V) << "Km/h" << endl;
    cout << "Velocidad asignada pasada en metros por segundo = " << (V*1*1000)/3600 << "m/s" << endl;
    return 0;
}
