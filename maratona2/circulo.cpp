#include <bits/stdc++.h>

using namespace std;

int main(){
   float r, area;

   cout << "Digite o valor do raio do circulo:";
   cin >> r;

   area = 3.14 * (r*r);

   cout << fixed << setprecision(3);
   cout << "Area: " << area << "m2";
}