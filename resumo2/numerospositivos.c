#include <stdio.h>

void abertura(){

    printf("\n");
    printf("          ESCOLA SENAI          \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("               <3               \n");
    printf("\n");
}

int main(){

    abertura();

    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Os numeros impares menores que %d sao: ", numero);

    for (int i = 1; i < numero; i++){

        if(i%2 != 0){
        printf("%d ", i);
        }
    }
    
}