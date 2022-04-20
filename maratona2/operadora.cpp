#include <bits/stdc++.h>

using namespace std;

int main(){
    int minutos;
    float valorPago;

    cout << "Quantos minutos?";
    cin >> minutos;

    valorPago = 50;

    if(minutos > 100){
        valorPago = valorPago + 2 * (minutos - 100);
    } 

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$" << valorPago;

}