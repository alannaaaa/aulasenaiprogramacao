#include <bits/stdc++.h>

using namespace std;

int main(){
   float distancia, combustivel, consumo;

   cout << "Distancia percorrida: ";
   cin >> distancia;
   cout << "Combustivel gasto: ";
   cin >> combustivel;
   
   consumo = distancia / combustivel;
   
   cout << fixed << setprecision(3);
   cout << "Consumo medio = " << consumo;

}
