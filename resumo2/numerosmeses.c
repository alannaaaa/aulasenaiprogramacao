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

    printf("Digite um numero inteiro de 1 a 12 correspondente ao mes desejado: ");
    scanf("%d", &numero);

    if(numero==1){
        printf("O numero corresponde ao mes de Janeiro");
    }
    if(numero==2){
        printf("O numero corresponde ao mes de Fevereiro");
    }
    if(numero==3){
        printf("O numero corresponde ao mes de Marco");
    }
    if(numero==4){
        printf("O numero corresponde ao mes de Abril");
    }
    if(numero==5){
        printf("O numero corresponde ao mes de Maio");
    }
    if(numero==6){
        printf("O numero corresponde ao mes de Junho");
    }
    if(numero==7){
        printf("O numero corresponde ao mes de Julho");
    }
    if(numero==8){
        printf("O numero corresponde ao mes de Agosto");
    }
    if(numero==9){
        printf("O numero corresponde ao mes de Setembro");
    }
    if(numero==10){
        printf("O numero corresponde ao mes de Outubro");
    }
    if(numero==11){
        printf("O numero corresponde ao mes de Novembro");
    }
    if(numero==12){
        printf("O numero corresponde ao mes de Dezembro");
    }


}