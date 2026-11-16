#include <stdio.h>
#include <stdbool.h>

typedef struct //Fazendo um struct para mostrar as caracteristicas que o produto tem
{
    char nome_produto;
    float preco;
    int quantidade;
} produto;


int main(){
    produto resgistro[4]; //Criando o Vetor vazio

    for (int i = 0; i < 5; i++) //Criando loop de repetição que irá rodar 5 vezes
    {
        printf("Digite o nome do produto: ");
      

        printf("Digite o preço do produto: ");
        scanf("%d", &produto[i].preco);
        printf("\n");

        printf("Digite a quantidade que vendeu produto: ");
        scanf("%f", &produto[i].quantidade);
        printf("\n");
    }
    


    return 0;
}