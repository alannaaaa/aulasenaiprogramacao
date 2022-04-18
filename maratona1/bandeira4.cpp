#include <bits/stdc++.h>

using namespace std;

int main(){
    int bandeira;
    float km, valor;
    float taxaminima = 3.50;

    cout << "Digite o numero da bandeira (1 ou 2): ";
    cin >>bandeira;

    cout <<"Digite a kliometragem rodada: ";
    cin >> km;

    if(bandeira == 1){
        valor = 1.80;
    } else {
        valor = 2.30;
    }

    float preco = km * valor;
    float calculodesconto = preco * 0.7;

    if(preco > taxaminima){

        cout << fixed << setprecision(2);
        cout << "Valor da corrida: " << preco << " reais.";
         
    } else {
        cout <<"Valor da corrida: "<< taxaminima;
    }
}