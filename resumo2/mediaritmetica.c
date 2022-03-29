#include <stdio.h>

void abertura(){

    printf("\n");
    printf("          ESCOLA SENAI          \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("               <3               \n");
    printf("\n");
}

int main(){

    abertura();

    int numero;
    int colocado;
    double soma = 0;

    printf("De quantos numeros voce deseja calcular a media? ");
    scanf("%d", &numero);

    for (int i = 0; i < numero; i++){
        
        printf("Numero: ");
        scanf("%d", &colocado);

        soma = soma + colocado;
    
    }

    double media = soma/numero;
    printf("Media dos numeros fornecidos: %.1f", media);
    

}