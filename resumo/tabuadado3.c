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
    printf("Tabuada do 3: \n");

    for(int multiplicador = 1; multiplicador <= 10; multiplicador++){

        int resultado = (3 * multiplicador);

        printf("3 x %d = %d\n", multiplicador, resultado);

    }
}