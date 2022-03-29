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
    int idadeIsmael;

    printf("Idade da Joana: ");
    scanf("%d", &idadeJoana);
    printf("Idade do Pedro: ");
    scanf("%d", &idadePedro);
    printf("Idade de Ismael: ");
    scanf("%d", &idadeIsmael);

    if(idadeIsmael > idadePedro && idadeIsmael > idadeJoana){
        printf("Ismael e o mais velho.");
    } else {

        if(idadeJoana > idadePedro){
            printf("Joana e a mais velha.");
        }else{
            printf("Pedro e o mais velho.");
        } 
    }
    


}