/*
QUESTÕES:
1. Elabore um programa que escreva as mensagens “Início do programa” e “Fim” na tela, uma em cada linha, usando apenas um comando printf().

2. Escreva um programa que leia um número inteiro e depois o imprima.

3. Escreva um programa que leia um número inteiro e depois imprima a mensagem “Valor lido:”, seguido do valor inteiro. Use apenas um comando printf().

4. Faça um programa que leia dois números inteiros e depois os imprima na ordem inversa em que eles foram lidos.

5. Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra ( / ). Exemplo: 02/10/2025

*/

#include <stdio.h>

int main(){
    printf("========================================");
    // questão 1:
    printf("\nInicio do programa \nFim \n");
    
    printf("========================================");

    //questão 2:
    int inteiro = 10;
    printf("\nValor guardado: %d\n", inteiro);

    printf("========================================");

    //questão 3:
    int lido;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &lido);
    printf("Valor lido: %d\n", lido);

    printf("========================================");

    //questão 4:
    int num1, num2;
    printf("\nDigite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("O segundo numero foi %d e o primeiro foi %d\n", num2, num1);

    printf("========================================");

    //questão 5:
    int dia, mes, ano;
    printf("\nDigite o dia, mes e o ano separados com , e espaco: ");
    scanf("%d, %d, %d", &dia, &mes, &ano);
    printf("Data: %d/%d/%d \n", dia, mes, ano);

    printf("========================================\n");
}