#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, x, dentro = 0, fora = 0;

   cout << "Quantos numeros voce vai digitar? ";
   cin >> n;

   for (int i = 1; i <= n; i++){
    
       cout << "Digite um numero: ";
       cin >> x;

       if(x >= 10 && x <= 20){
           dentro = dentro + 1;
       } else {
           fora = fora + 1;
       }

   }

   cout << dentro << " DENTRO" << endl;
   cout << fora << " FORA" << endl;
   
}