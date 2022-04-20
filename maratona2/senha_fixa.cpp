#include <bits/stdc++.h>

using namespace std;

int main(){
    string senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while(senha != "2002"){
        cout << "Senha Invalida! tente novamente."<< endl;
        cin >> senha;
    }

    cout << "Acesso liberado.";


}
