#include <bits/stdc++.h>

using namespace std;

int main(){
    int bandeira;
    float km, valor;

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

    cout << fixed << setprecision(2);
    cout << "Valor da corrida: " << preco << " reais.";
}
    