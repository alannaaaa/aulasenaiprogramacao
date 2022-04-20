#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float a, b, c, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        
        cout << "Digite tres numeros ";
        cin >> a;
        cin >> b;
        cin >> c;

        media = (a * 2 + b * 3 + c * 5)/10;
        cout << fixed <<  setprecision(1);
        cout << "Media: " << media << endl;
    }
    
    
}