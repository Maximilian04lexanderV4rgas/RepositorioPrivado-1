#include <iostream>

using namespace std;

int main()
{
    float m1,m2,b1,b2 ;
    cout << "Ingrese el valor de m1 (marcando positivdad o negatividad del valor);" << endl;
    cin >> m1 ;
    cout << "Ingrese el valor de b1 (marcando positivdad o negatividad del valor);" << endl;
    cin >> b1 ;
    cout << "Funcion y1=" << m1 << "x" << "+" << b1 << endl ;
    cout << "Ingrese el valor de m2 (marcando positivdad o negatividad del valor);" << endl;
    cin >> m2 ;
    cout << "Ingrese el valor de b2 (marcando positivdad o negatividad del valor);" << endl;
    cin >> b2 ;
    cout << "Funcion y2=" << m2 << "x" << "+" << b2 << endl ;
      if (m1 == m2 && b1 == b2)
    {
        cout << "Las rectas tienden a ser coincidentes en todos sus elementos por ende su interseccion es infinita;" << endl;
        return 0 ;
    }
      if (m1 == m2)
    {
       cout << "Las rectas tienden a poseer un mismo valor en la pendiente,como resultado ambas rectas son paralelas y no poseen una interseccion declarada;" << endl;
        return 0 ;
    }
      else
    {
       cout << "Existe Interseccion entre ambas rectas" << endl ;
       cout << "Funcion propia de la Interseccion="  << m1-m2 << "x" << "+" << b1-b2 << endl ;
       cout << "Punto en X de la Interseccion=" << -(b1-b2)/(m1-m2) << endl ;
       cout << "Punto en y de la Interseccion=" << m1*-(b1-b2)/(m1-m2)+b1 << endl ;
       cout << "Punto en (X;Y) en el cual ambas funciones se intersectan o cortan de forma simultanea=" << "(" << -(b1-b2)/(m1-m2)<< ";" << m1*(-(b1-b2)/(m1-m2))+b1 << ")" << endl ;
    }
    return 0;
}
