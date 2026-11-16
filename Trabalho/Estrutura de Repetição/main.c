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

        switch (resp) //Para Selecionar uma das opções
        {
        case 1: //Vai executar o código para somar os números
            ++cont; //Adiciona mais 1 na várial para o resultado parar de ser 0
            while (resp == 1) // Vai continuar repitindo enquanto for verdadeiro
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
            } //Esse códifo faz o número de soma ter o num somado ao valor que soma já tem armazenado tendo novo valor
            break;

        case 2:
            if (cont != 0) //Serve para caso cont já tenha sido utilizado no case 1
            {
                --cont;
            }
            printf("A quantidade de números digitados foram %d\n", cont); //Mostra a quantidade de números que foram digitados
            printf("O resultado da sua soma é %d\n", soma);//Mostra o resultado total da soma
            printf("\n");
            break;

        case 3:
            //Só serve para resetar os valores de números digitados e números somados
            soma = 0;
            cont = 0;
            break;

        case 0:
            //Para fechar o programa
            printf("Programa será Fechado");
            break;

        default:
            //A mensagem de erro que aparece e continua o loop
            printf("Número invalido foi digitado\n");
            printf("\n");
            break; 
         }

    } while (resp != 0);//Sempre vai manter o loop mesmo digitando um número que não exite nas opções

    return 0;
}