#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, soma, troca;

    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;

    if(x>y) {
      troca = x;
      x = y;
      y = troca;
    }


    soma = 0;

    for (int i = x+1; i <= y-1; i++)
    {
        if(i%2!=0){
            soma = soma + i;
        }
    }


    cout << "Soma dos impares: " << soma;

}
