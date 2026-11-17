#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct //Fazendo um struct para definir as caracteristicas que irá armazenar
{
    char nome_produto[50]; //Nome do Produto
    float preco; //Preço
    int quantidade; //Quantidade Vendida
} produto;


int main(){
    produto resgistro[5]; //Criando o Vetor vazio  para registrar os produtos
    int cont = 0; //Contador visual
    int soma_quantidade = 0; //Registrar soma dos valores de quantidade
    float soma_preco = 0; //Registrar soma dos valores de preço

    //Armazena Informações dos produtos records
    int produto_quantidade;
    float produto_preco;
    char produto_quantidade_nome[50];
    char produto_preco_nome[50];

    for (int i = 0; i < 5; i++) //Criando loop de repetição que irá rodar 5 vezes para adicionar os produtos
    {
         ++cont; //Só pra contagem ficar Bonita na exibição já que normalmente começa em 0 só que dessa forma apenas visualmente começa em 1

        printf("Registrar Produto \n");
        printf("%d - Registro \n", cont);
        printf("\n");

        

        printf("Digite o nome do produto: ");
        fgets(resgistro[i].nome_produto, sizeof(resgistro[i].nome_produto), stdin); //Maneira mais indicada para adicionar string no struct
        resgistro[i].nome_produto[strcspn(resgistro[i].nome_produto, "\n")] = '\0'; //Serve para ignorar o \n permitindo não bugar na hora de digitar o nome
        printf("\n");

        //Pedir ao Usuário digitar Preço do Produto
        printf("Digite o preço do produto: R$");
        scanf("%f", &resgistro[i].preco);
        printf("\n");

        //Pedir ao Usuário digitar a Quantidade Vendida daquele produto
        printf("Digite a quantidade que vendeu produto: ");
        scanf("%d", &resgistro[i].quantidade);
        printf("\n");

        // Limpa o buffer do teclado para o próximo fgets funcionar corretamente
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\n");
    }

    for (int i = 0; i < 5; i++) //Serve Para mostrar a lista de todos os Produtos colocados
    {
        printf("Nome Produto: %s, Preço: R$%.2f, Quantidade: %d \n", resgistro[i].nome_produto, resgistro[i].preco, resgistro[i].quantidade);
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) // Serve para armazenar os dados da Quantidade total, Valor Total, Produto mais vendido, Mais caro
    {
        soma_preco += resgistro[i].preco * resgistro[i].quantidade; // Vai somar todos os preços durante o loop
        soma_quantidade += resgistro[i].quantidade; // Vai somar a quantidade total de todos os produtos

        if (i == 0) //Vai Registrar as informações dos primeiros produtos
        {
            strcpy(produto_quantidade_nome, resgistro[i].nome_produto); //Armazena o nome do produto
            produto_quantidade = resgistro[i].quantidade; //Quantidade do produto

            strcpy(produto_preco_nome, resgistro[i].nome_produto); 
            produto_preco = resgistro[i].preco; //Preço do produto

        } else {

            if (produto_quantidade < resgistro[i].quantidade) //Vai fazer o comparativo é caso for verdadeiro irá registrar o produto atual
            {
                strcpy(produto_quantidade_nome, resgistro[i].nome_produto);
                produto_quantidade = resgistro[i].quantidade;
            }

            if (produto_preco < resgistro[i].preco) //Vai fazer o comparativo é caso for verdadeiro irá registrar o produto atual
            {
                strcpy(produto_preco_nome, resgistro[i].nome_produto);
                produto_preco = resgistro[i].preco;
            }

        }

    }
    
    printf("\n");
    printf("Quantidade Total de Produtos Vendidos: %d\n", soma_quantidade); //Vai imprimir na tela a quantidade total
    printf("Preço Total dos Produtos Vendidos: R$%.2f\n", soma_preco); //Vai imprimir na tela o preço total
    printf("\n");

    //Vai mostrar o nome do produto com maior valor
    printf("Produto Com Maior Preço:\n");
    printf("\n");
    printf("%s \n", &produto_preco_nome);
    printf("Preço: R$%.2f \n", produto_preco);

    //Vai mostrar o nome do produto mais vendido
    printf("\n");
    printf("Produto Com Maior Quantidade:\n");
    printf("\n");
    printf("%s \n", &produto_quantidade_nome);
    printf("Quantidade: %d \n", produto_quantidade);




    return 0;
}