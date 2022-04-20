#include <bits/stdc++.h>

using namespace std;

int main(){
    float a, b, c, areaq, areatri, areatra;

    cout << "Digite a medida A: ";
    cin >> a;
    cout << "Digite a medida B: ";
    cin >> b;
    cout << "Digite a medida C: ";
    cin >> c;
    
    areaq = a * a;
    areatri = (a * b)/2;
    areatra = (a + b) / 2 * c;

    cout << fixed <<  setprecision(4);
    cout << "Quadrado: " << areaq << endl;
    cout << "Triangulo: " << areatri << endl; 
    cout << "Trapezio: " << areatra << endl;
    
    
}