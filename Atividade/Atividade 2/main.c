#include <stdio.h>

int main(){
    const float desconto = 0.05;
    const float imposto = 0.1;
    float tv = 1500;

    printf("Preço da TV de Fabrica: R$%.2f\n", tv); // Mostra o valor de fabrica da TV

    float tv_imposto = tv * imposto; //Calcula o Imposto da TV
    printf("Imposto da TV: %.2f\n", tv_imposto); // Mostra o valor do Imposto

    float tv_desconto = tv * desconto; //Calcula o Desconto em cima do valor de Fabrica da TV
    printf("Desconto da TV: %.2f\n", tv_desconto); // Mostra o valor do Desconto

    float tv_real = tv + tv_imposto - tv_desconto; //Calcula o Valor completo da TV
    printf("Valor total para vender a TV: %.2f\n", tv_real); // Mostra o resultado do valor da TV com desconto e imposto
}