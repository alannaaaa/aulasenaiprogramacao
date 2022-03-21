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

    int numero1;
    int numero2;

    printf("Digite dois numeros diferentes de zero.\n");
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    double media = (numero1 + numero2) / 2.0;

    printf("Soma dos numeros: %d \n", numero1 + numero2);
    printf("Subtracao dos numeros: %d \n", numero1 - numero2);
    printf("Produto dos numeros: %d \n", numero1 * numero2);
    printf("Divisao dos numeros: %d \n", numero1 / numero2);
    printf("Media dos numeros: %.2f", media);

}