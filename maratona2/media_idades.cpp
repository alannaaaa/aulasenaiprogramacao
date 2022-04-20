#include <bits/stdc++.h>

using namespace std;

int main(){
    int idade, soma = 0, cont = 0;
    float media;

    cout << "Digite as idades: ";
    cin >> idade;
    
    while(idade>=0){
        soma = soma + idade;
        cont = cont + 1;
        cin >> idade;
    }

    if(cont == 0){
        cout << "Impossivel calcular";
    } else {
        media = soma / cont;
        cout << fixed <<  setprecision(2);
        cout << "Media: " << media;
    }
}