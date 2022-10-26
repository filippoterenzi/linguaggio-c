#include <iostream>
#include <cmath>

using namespace std;

int main()  // Code starts here
{
    // Dati
    float base, catetoB, ipotenusa, area, perimetro, altIpo;
 
    cout << "Inserire il primo cateto: ";
    cin >> base;
    
    cout << "Inserire il secondo cateto: ";
    cin >> catetoB;
    
    ipotenusa = sqrt((base*base)+(catetoB*catetoB));
    area = base*catetoB/2;
    perimetro = base+catetoB+ipotenusa;
    altIpo = area*2/ipotenusa;
    
    cout << "\nL'ipotenusa è: "<< ipotenusa;
    cout << "\nIl perimetro è: "<< perimetro;
    cout << "\nL'area è: "<< area;
    cout << "\nL'altezza relativa all'ipotenusa è: "<< altIpo;
    
    return 0;
}
