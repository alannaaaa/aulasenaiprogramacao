#include <bits/stdc++.h>

using namespace std;

int main(){
    int bandeira, desconto;
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

        cout <<"O taxi oferece desconto de 30% ? (1-sim 2-nao)";
        cin >> desconto;


        if(desconto == 1){
            cout << fixed << setprecision(2);
            cout <<"Valor da corrida original: " << preco << " reais." << endl;
            cout <<"Valor da corrida com desconto: " << calculodesconto << " reais."; 
        } else {
            cout << fixed << setprecision(2);
            cout << "Valor da corrida: " << preco << " reais.";
        }
         
    } else {
        cout <<"Valor da corrida: "<< taxaminima;
    }
}