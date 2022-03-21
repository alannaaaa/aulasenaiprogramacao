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

    int idadeJoana;
    int idadePedro;

    printf("Idade da Joana: ");
    scanf("%d", &idadeJoana);
    printf("Idade do Pedro: ");
    scanf("%d", &idadePedro);

    if(idadeJoana > idadePedro){
        printf("Joana e a mais velha.");
    } 
    else if(idadeJoana < idadePedro) {
        printf("Pedro e o mais velho.");
    } 
    else {
        printf("As idades sao iguais.");
    }


}