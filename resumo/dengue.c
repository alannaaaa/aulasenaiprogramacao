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

    int suspeitos;
    int confirmados;
    int mortes;

    printf("Preencha com as seguintes informacoes sobre a Dengue em Votuporanga: \n");
    printf("        Casos Suspeitos: ");
    scanf("%d", &suspeitos);
    printf("        Casos Confirmados: ");
    scanf("%d", &confirmados);
    printf("        Quantidade de Mortes: ");
    scanf("%d", &mortes);
    printf("\n");

    printf("Informacoes sobre a dengue em Votuporanga: \n");
    printf("        Casos Suspeitos: %d \n", suspeitos);
    printf("        Casos Confirmados: %d \n", confirmados);
    printf("        Quantidade de Mortes: %d \n\n", mortes);
    printf("        Total de dados: %d", suspeitos + confirmados + mortes);
}