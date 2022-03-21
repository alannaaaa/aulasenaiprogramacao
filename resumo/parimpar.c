#include <stdio.h>

void abertura(){

    printf("\n");
    printf("           ESCOLA SENAI         \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("\n");
}

int main(){

    abertura();

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("O numero %d e par.", numero);
    } else {
        printf("O numero %d e impar.", numero);
    }

}