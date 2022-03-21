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

    int lado;

    printf("Digite o tamanho de um lado em cm: ");
    scanf("%d", &lado);

    printf("Area do quadrado: %d cm2 \n", lado * lado);
    printf("Perimetro do quadrado: %d cm", lado * 4);

}