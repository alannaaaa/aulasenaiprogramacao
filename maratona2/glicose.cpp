#include <bits/stdc++.h>

using namespace std;

int main(){
   float glicose;

   cout << "Digite a medida da glicose: ";
   cin >> glicose;

   if (glicose <= 100){
       cout << "normal";
   }
   else if(glicose <= 140){
       cout << "elevado";
   }
   else{
       cout << "diabetes";
   }

}