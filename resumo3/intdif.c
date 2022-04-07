#include <stdio.h>

void abertura(){

    printf("\n");
    printf("           ESCOLA SENAI         \n");
    printf("       'Euclides Facchini'      \n");
    printf("           Votuporanga          \n");
    printf("      Alanna Soares Marchetti   \n");
    printf("\n");
}

void verifica(int a, int b, int c){
    if(a < b && a < c){
        if(b < c){
            printf(" %d %d %d", a, b, c);
        } else {
            printf(" %d %d %d", a, c, b);
        }
    }
    if (b < a && b < c){
        if(a < c){
            printf(" %d %d %d", b, a, c);
        } else {
            printf(" %d %d %d", b, c, a);
        }
    }
    if(c < a && c < b){
        if(a < b){
            printf(" %d %d %d", c, a, b);
        } else {
            printf(" %d %d %d", c, b, a);
        }
    }
}

int main(){

    abertura();

    int n1, n2, n3;

    printf("Digite tres numeros diferentes: \n");
    printf("-> ");
    scanf("%d", &n1);
    printf("-> ");
    scanf("%d", &n2);
    printf("-> ");
    scanf("%d", &n3);

    verifica(n1, n2, n3);

}