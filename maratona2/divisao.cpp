#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
   float x, y, divisao;

   cout << "Quantos casos voce vai digitar? ";
   cin >> n;

   for (int i = 1; i <= n; i++){
    
       cout << "Entre com o numerador: ";
       cin >> x;
       cout << "Entre com o denominador: ";
       cin >> y;

       if(y == 0){
           cout << "divisao impossivel" << endl;
       } else {
           divisao = x / y;
           cout << fixed << setprecision(2);
           cout << "divisao: " << divisao << endl;
       }

   }

}