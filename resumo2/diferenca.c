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

    int numero1;
    int numero2;

    printf("Digite dois numeros diferentes e inteiros.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if(numero1>numero2){
        printf("Diferenca do maior numero pelo menor: %d", numero1 - numero2);
    } else {
        printf("Diferenca do maior numero pelo menor: %d", numero2 - numero1);       
    }

}