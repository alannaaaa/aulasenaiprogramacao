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

    int alunos;
    int alunas;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("Digite a quantidade de alunas: ");
    scanf("%d", &alunas);
    printf("\n");

    if(alunos > alunas){
        printf("Existem mais alunos que alunas.");
    } 
    else if(alunos < alunas) {
        printf("Existem mais alunas que alunos.");
    } 
    else {
        printf("A quantidade de alunos se equivale a quantidade de alunas.");
    }
}