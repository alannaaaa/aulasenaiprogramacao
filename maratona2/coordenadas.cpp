#include <bits/stdc++.h>

using namespace std;

int main(){
   float x, y;

   cout << "valor de x: ";
   cin >> x;

   cout << "valor de y: ";
   cin >> y;

   if (x > 0 && y > 0){
       cout << "q1 ";
   }
   else if(x < 0 && y > 0){
       cout << "q2 ";
   }
   else if(x < 0 && y < 0){
       cout << "q3 ";
   }
   else if(x > 0 && y < 0){
       cout << "q4 ";
   }
   else if(x==0 && y == 0){
       cout << "origem ";
   }
   else if(x==0){
       cout << "eixo y";
   } else {
       cout << "eixo x";
   }

}