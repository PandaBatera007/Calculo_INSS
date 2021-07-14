#include <stdio.h>

/*
Tentando fazer um programa que calcula 
o percentual inss de um salario bruto
e faz a liquidez desse valor.
*/


int main() {
    // Variáveis
    double salario_base, salario_liquido, liquidez;
    
    //pergunta inicial
    printf("Qual o Salario a ser Calculado? ");
    scanf("%lf", &salario_base);
    
    //primeira condição 8%
    if(salario_base <= 1659.38) {
        liquidez = salario_base * 8/100;

        salario_liquido = salario_base - liquidez;
        printf("O Salario Liquido eh R$%.2lf\n", salario_liquido);
    }
    // Segunda condição - 9%
    else if(salario_base > 1659.38 && salario_base <= 2765.66) {
        liquidez = salario_base * 9/100;

        salario_liquido = salario_base - liquidez;
        printf("O Salario Liquido eh R$%.2lf\n", salario_liquido);
    }
    //Terceira condição 11%
    else if(salario_base > 2765.66 && salario_base <= 5531.31) {
            liquidez = salario_base * 11/100;
    
            salario_liquido = salario_base - liquidez;
            printf("O Salario Liquido eh R$%.2lf\n", salario_liquido);
    }
    //Quarta condição Valor fixo 608.44
    else {
                salario_liquido = salario_base - 608.44;
                printf("O Salario Liquido eh R$%.2lf\n", salario_liquido);
    }
    return 0;

}