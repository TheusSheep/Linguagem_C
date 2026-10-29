#include <stdio.h>

int main() {
    int x;
    int y;

    printf("Bem-Vindo ao Calculo de Média\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("\nDigite o segundo número: ");
    scanf("%d", &y);

    float media = ( x + y) / 2;

    printf("Sua media é: %.2f", media);
    printf("\n");
    return 0;
}