#include <stdio.h>

void abertura(){

    printf("\n");
    printf("           ESCOLA SENAI         \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("\n");
}

void comparacao(int numero2, int numero1){
    if(numero2>numero1){
        printf("maior que o numero %d.", numero1);
    } else {
        printf("menor que o numero %d", numero1);
    }
}

int main(){

    abertura();

    int numero1;
    int numero2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero2);

    if(numero2%2 == 0){
        printf("O numero %d e par e ", numero2);

        comparacao(numero2, numero1);

    } else {
        printf("O numero %d e impar e ", numero2);

        comparacao(numero2, numero1);
    }

}