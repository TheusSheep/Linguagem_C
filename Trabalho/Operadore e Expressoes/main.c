#include <stdio.h>
#include <stdbool.h>

int main() {
    const int x; //Defnindo Variavel para número inteiro
    const int y; //Defnindo Variavel para número inteiro
    const int z; //Defnindo Variavel para número inteiro

    //Mensagem Inicial
    printf("Bem Vindo ao programa de\n");
    printf("Operadores e Expressoes\n");
    printf("\n");

    //Para usúario definir o primeiro número
    printf("Digite o Primeiro Número: ");
    scanf("%d", &x); //Para receber o Número que o usúario digitar e colocar na variavel x

    //Para usúario definir o primeiro número
    printf("Digite o Segundo Número: ");
    scanf("%d", &y); //Para receber o Número que o usúario digitar e colocar na variavel y

    //Para usúario definir o primeiro número
    printf("Digite o Terceiro Número: ");
    scanf("%d", &z); //Para receber o Número que o usúario digitar e colocar na variavel z
    printf("\n");

    int soma = x + z + y; // Somar os números do Usúario
    int menos = x - z -  y; // Subtrair os números do Usúario
    int mult = x * z * y; // Multiplica os números do Usúario
    float divi = (float)x / z / y; // Dividir os números do  Usúario

    printf("Soma dos Números é: %d\n", soma); // Mostra o resultado da Soma
    printf("Soma dos Subtração é: %d\n", menos); // Mostra o resultado da Subtração
    printf("Soma dos Múltiplicação é: %d\n", mult); // Mostra o resultado da Multiplicação
    printf("Soma dos Divisão é: %.2f\n", divi); // Mostra o resultado da Divisão
    printf("\n");

    bool maior = x > y; //Vê se X é maior que Y
    bool menor = y < z; //Vê se Y é menor que Z

    printf("O %d > %d isso é: %s\n", x, y, maior ? "Verdadeiro" : "Falso" );
    printf("O %d < %d isso é: %s\n", y, z, menor ? "Verdadeiro" : "Falso" );
    printf("\n");

    bool num = x >= 0 && y % 2 == 0; // Calculo para ver se o número é positivo e par

    printf("%s\n", num ? "Parabéns o 1° número passou no critério de ser positivo, e o 2° número passou no critério de ser par" : " "); 
    //Pega o valor de verdadeiro e falso e exibe como uma mensagem

    return 0;
}