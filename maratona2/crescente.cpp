#include <bits/stdc++.h>

using namespace std;

int main(){
   float x, y;

   cout << "Digite dois numeros:";
   cin >> x;
   cin >> y;
   
   while(x != y){
      if(x < y){
         cout << "CRESCENTE!" << endl;
    }else{
        cout << "DECRESCENTE!" << endl;
    }
      
      cout << "Digite outros dois numeros:";
      cin >> x;
      cin >> y;
   }


}