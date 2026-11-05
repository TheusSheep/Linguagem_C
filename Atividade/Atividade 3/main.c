#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    printf("Tabuada do 2");
    for (int i = 1; i <= 10; i++){
        int r = 2 * i;
        printf("2 x %d = %d\n", i, r);
        printf("\n");
    }

      char respo;

    do {
        system("cls");
        system("clear");
        int n1, n2;
      

        printf("Digite o primeiro número da múltiplicação: ");
        scanf("%d", &n1);
        printf("\n");
        printf("Digite o segundo número da múltiplicação: ");
        scanf("%d", &n2);
        printf("\n");

        int result = n1 * n2;

        printf("\n");
        printf("A múltiplicação de %d x %d = %d\n", n1, n2, result);
        printf("\n");
        printf("Quer continuar o programa de múltiplicação: [S/N] ");
        scanf(" %c", &respo);
        printf("\n");

    } while (respo == 'S' || respo == 's');

    return 0;
}