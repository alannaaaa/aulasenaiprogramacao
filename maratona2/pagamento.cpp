#include <bits/stdc++.h>

using namespace std;

int main(){
    string nome;
    float valorHora, pagamento;
    int horasTrabalhadas;

    cout << "Nome: ";
    cin >> nome;
    cout << "valor por hora: ";
    cin >> valorHora;
    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;

    pagamento = valorHora * horasTrabalhadas;

    cout << fixed <<  setprecision(2);
    cout << "o pagamento para " << nome << " deve ser: "<< pagamento;

}