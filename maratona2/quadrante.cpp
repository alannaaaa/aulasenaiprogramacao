#include <bits/stdc++.h>

using namespace std;

int main(){
    float x, y;

    cout << "Digite os valores das coordenadas x e y: ";
    cin >> x;
    cin >> y;

    while(x!=0 && y!=0){
         if (x > 0 && y > 0){
            cout << "q1 "<<  endl;
        }
        else if(x < 0 && y > 0){
            cout << "q2 "<<  endl;
        }
        else if(x < 0 && y < 0){
            cout << "q3 "<<  endl;
        }
        else{
            cout << "q4 "<<  endl;
        }
    
        cout << "Digite os valores das coordenadas x e y: ";
        cin >> x;
        cin >> y;

    }

}