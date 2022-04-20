#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, qte, totalCobaias, totalSapos = 0, totalCoelhos = 0, totalRatos = 0;
    double pratos, psapos, pcoelhos;
    char tipoCobaia;

    cout << "Quantos casos de teste serao digitados?";
    cin >> n;

    for (int i = 1; i <= n; i++){

      cout << "Quantidade de cobaias: ";
      cin >> qte;

      cout << "Tipo de cobaia: (R/S/C) ";
      cin >> tipoCobaia;

      if(tipoCobaia == 'R'){
          totalRatos = totalRatos + qte;
      }
      else if(tipoCobaia == 'S'){
          totalSapos = totalSapos + qte;
      }
      else {
          totalCoelhos = totalCoelhos + qte;
      }
        
    }

    totalCobaias = totalRatos + totalSapos + totalCoelhos;
   
    pcoelhos = ((double)totalCoelhos / (double)totalCobaias) * 100.00; 
    pratos = ((double)totalRatos / (double)totalCobaias) * 100.00;
    psapos = ((double)totalSapos / (double)totalCobaias) * 100.00;
    
    cout << "RELATORIO FINAL:" <<endl;
    cout << "Total: " <<  totalCobaias <<  " cobaias" <<endl;
    cout << "Total de coelhos: " <<  totalCoelhos <<endl;
    cout << "Total de ratos: " <<  totalRatos <<endl;
    cout << "Total de sapos: " <<  totalSapos <<endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " <<  pcoelhos <<endl;
    cout << "Percentual de ratos: " <<  pratos <<endl;
    cout << "Percentual de sapos: " <<  psapos <<endl;
}