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
    
    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    for(int multiplicador = 1; multiplicador <= 10; multiplicador++){

        int resultado = (numero * multiplicador);

        printf("%d x %d = %d\n", numero, multiplicador, resultado);

    }
}