#include <stdio.h>
#include <stdlib.h>

void limpartela(void){
    #ifdef _WIN32 // serve para identificar se é o sistema operacional windows
        system("cls"); // executa a limpeza no windows
    #else // caso não for windows executa o comando do linux e macbook
        system("clear"); // executa a limpeza do linux e macbook
    #endif
}

void pausar(void) {
    printf("\nPressione ENTER para continuar...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {} // limpa o '\n' pendente do scanf e caracteres extras
    getchar(); // aguarda o Enter do usuario
    limpartela(); // mandar para a função que executa a limpeza na tela
}

float calcular_salario_bruto(float hora, float valor){

    float dia_trabalhado = valor * hora; // faz o calculo do total que recebe no dia trabalhado
    float mensal_bruto = dia_trabalhado * 30; // calculo do que recebe no mês trabalhado

    return mensal_bruto; // retorna o valor do salario bruto mensal
}

float calcular_desconto_salarial(float bruto){

    float desconto = bruto * 0.09; // faz o calculo do desconto de 9% en cima do salario bruto

    return desconto; // retorna o valor que a de ser descontado
}

float calcular_salario_liquido(float bruto, float desconto){

    float liquido = bruto - desconto; // faz o salário bruto menos o desconto

    return liquido; // retorna o salário liquido que é o valor a receber
}

int main(){
    float hora_trabalhada, valor_da_hora, salario_bruto, desconto_salarial, salario_liquido; 
    // variável para armazena horário trabalhado, valor de cada hora, salario bruto, desconto no salario e salario liquido

    int opcao; // variávael para armazena o valor da opção do menu

    printf("_____ Venha Calcular seu Salário _____\n");
    printf("     programa de calculo de salário     \n\n\n");

    do // Loop 'do...while' para manter o usuário no programa e ele utilizar a quantidade de vezes que bem entender
    {
        printf(" --- Menu --- \n\n");
        printf("1 - Calcular Salário\n");
        printf("2 - Ver Extrato Salárial\n");
        printf("0 - Finalizar Programa\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao); // mandar o valor digitado pelo usuário a variável opção
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Digite o sua carga horária: ");
            scanf("%f", &hora_trabalhada); // mandar o valor digitado pelo usuário a variável horas trabalhada
            printf("\n");
            printf("Quando Recebe por Hora trabalhada: R$");
            scanf("%f", &valor_da_hora); // mandar o valor digitado pelo usuário a variável valor de cada hora
            printf("\n");

            salario_bruto = calcular_salario_bruto(hora_trabalhada, valor_da_hora); 
            // chama a função do calculo do salario bruto pegando os valores de horas trabalhada e valor de cada hora

            pausar(); // chama a função para o usuário ter tempo de ler as informações e depois continuar o programa

            break;
        
        case 2:
            desconto_salarial = calcular_desconto_salarial(salario_bruto);
            //  chama a função do calculo do desconto salarial pegando o valor de salario bruto para realizar a conta

            salario_liquido = calcular_salario_liquido(salario_bruto, desconto_salarial);
            // chama a função do calculo do salario liquido pegando valor de desconto mais salário bruto para realizar a conta

            printf("Salário Bruto: R$%.2f\n\n", salario_bruto); // mostra valor do salario bruto
            printf("Desconto Salárial de 9%%, valor a ser descontado: R$%.2f\n\n", desconto_salarial); // mostra valor a ser descontado
            printf("Salário Liquido: R$%.2f\n\n", salario_liquido); // mostra valor do salario liquido

            pausar(); // chama a função para o usuário ter tempo de ler as informações e depois continuar o programa

            break;

        case 0:
            break;

        default:
            printf("Número Inválido\n\n"); //  mensagem de erro ao colocar um valor inválido

            pausar(); // chama a função para o usuário ter tempo de ler as informações e depois continuar o programa

            break;
        }
        
    } while (opcao != 0); // só finaliza o programa ao colocar o valor 0

    limpartela(); // limpar o terminal ao fechar o programa

    return 0;
}