#include <stdio.h>
#include <stdbool.h>

int main() {
    int resp;
    int num;
    int soma = 0;
    int cont = 0;

    do{
        printf("Seja Bem-Vindo ao programa de somar números\n");
        
        printf("\n");
        printf("1 - Abrir Programa\n");
        printf("2 - Ver resultado da Soma\n");
        printf("3 - Resetar Calculo\n");
        printf("0 - Fechar\n");
        printf("\n");

        printf("Digite a Opção: ");
        scanf("%d", &resp);
        printf("\n");

        switch (resp)
        {
        case 1:
            ++cont;
            while (resp == 1)
            {
                printf("Digite um %d° para soma: ", cont);
                scanf("%d", &num);
                printf("\n");
                soma += num;
                ++cont;

                printf("1 - Continuar | 2 - Voltar | 0 - Fechar Programa\n");
                printf("\n");
                printf("Digite uma Opção: ");
                scanf("%d", &resp);
                printf("\n");
            }
            break;

        case 2:
            if (cont != 0)
            {
                --cont;
            }
            printf("A quantidade de números digitados foram %d\n", cont);
            printf("O resultado da sua soma é %d\n", soma);
            printf("\n");
            break;

        case 3:
            soma = 0;
            cont = 0;
            break;

        case 0:
            printf("Programa será Fechado");
            break;

        default:
            printf("Número invalido foi digitado\n");
            printf("\n");
            break; 
         }

    } while (resp != 0);

    return 0;
}