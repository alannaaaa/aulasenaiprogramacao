#include <bits/stdc++.h>

using namespace std;

int main(){
    int codigo, alcool, gasolina, diesel;

    alcool = 0;
    gasolina = 0;
    diesel = 0;
    cout << "Informe um codigo (1(alcool), 2(gasolina), 3(diesel)) ou 4 para parar: ";
    cin >> codigo;

    while(codigo != 4){

        if (codigo == 1){
            alcool = alcool +1;
        }
        if (codigo == 2){
            gasolina = gasolina +1;
        }
        if (codigo == 3){
            diesel = diesel +1;
        }

        cout << "Informe um codigo (1(alcool), 2(gasolina), 3(diesel)) ou 4 para parar: ";
        cin >> codigo;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl; 
    cout << "Diesel: " << diesel << endl;


}