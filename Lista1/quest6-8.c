/*
QUESTÕES: 
6. Escreva um programa em C que leia a idade de uma pessoa expressa em anos, meses e dias e mostre essa idade expressa em dias. Utilize variáveis do tipo int para armazenar os valores. Considere que um ano possui 365 dias e um mês possui 30 dias. Exemplo: 3 anos, 2 meses e 25 dias = 1180 dias.

7. Escreva um programa em C que troque o valor de duas variáveis x e y. Após a troca, o valor da variável y deve ser o valor original de x, e vice-versa. Utilize variáveis do tipo int.

8. Escreva um programa em C que receba um salário (em reais) e um percentual de reajuste, e então calcule o salário reajustado. O percentual de reajuste deve ser um número real entre 0 e 1. Utilize variáveis do tipo float.
*/

#include <stdio.h>

int main(){
    printf("========================================\n");
    //questão 6:
    int idadeD, dia, mes, ano;
    printf("Digite sua data de nascimento (Ex.: 12/03/2009): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    idadeD = ((2026-ano) * 365) + (mes * 30) + dia;
    printf("Idade: %d dias\n", idadeD);

    printf("========================================\n");

    //questão 7:
    int x, y, z;
    x= 5;
    y= 9;
    z= x;

    printf("x = %d, y = %d", x, y);
    x = y;
    y = z;
    printf("x = %d, y = %d", x, y);

    printf("========================================\n");

    //questão 8:
    float salario, reajuste;
    printf("Digite seu salario e o percentual de reajusto separado com , : ");
    scanf("%f, %f", &salario, &reajuste);

    reajuste = (reajuste/100)*salario;
    salario += reajuste;
    printf("O salario com reajuste e: %.2f\n", salario);

    printf("========================================\n");
}
