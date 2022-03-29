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

    int chuteiraA, chuteiraB, chuteiraC;

    printf("Digite a quantidade de chuteiras da marca A: ");
    scanf("%d", &chuteiraA);
    printf("Digite a quantidade de chuteiras da marca B: ");
    scanf("%d", &chuteiraB);
    printf("Digite a quantidade de chuteiras da marca C: ");
    scanf("%d", &chuteiraC);
    
    printf("\n");

    printf("Existem %d chuteiras da marca A.\n", chuteiraA);
    printf("Existem %d chuteiras da marca B.\n", chuteiraB);
    printf("Existem %d chuteiras da marca C.\n", chuteiraC);

}