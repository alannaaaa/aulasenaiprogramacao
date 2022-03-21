#include <stdio.h>

int main(){

    printf("\n");
    printf("           ESCOLA SENAI         \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("\n");

    int alunos;
    int alunas;

    printf("Quantos alunos homens tem na sala? ");
    scanf("%d", &alunos);
    printf("Quantas alunas mulheres tem na sala? ");
    scanf("%d", &alunas);

    printf("Essa escola tem %d alunos e %d alunas.", alunos, alunas);

}