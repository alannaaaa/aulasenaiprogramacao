#include <bits/stdc++.h>

using namespace std;

int main(){
   double c, f;
   char unidade;

   cout<<"Voce vai digitar a temperatura em qual unidade? (C/F) ";
   cin >> unidade;

   if (unidade == 'F'){
       cout<<"Digite a temperatura em fahrenheit: ";
       cin >> f;

       c = 5 / (double)9 * (f - (double)32);
       cout << fixed << setprecision(2);
       cout << "Temperatura equivalente em Celsius: "<< c;

   } else {
        cout << "Digite a temperatura em celsius: ";
        cin >> c;

        f = (9.0 * c / 5.0) + 32.0;
        cout << fixed << setprecision(2);
        cout << "Equivalente em Fahrenheit: " << f;
    }

        

   

}