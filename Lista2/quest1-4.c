#include <stdio.h>

int main(){
    /*
    1) Escreva um algoritmo que leia um valor (inteiro positivo) e determine se o valor é par ou ímpar. Dica: o operador % é chamado operador módulo e 
    retorna o resto de uma divisão. Por exemplo, 21 % 10 retorna 1.

    2) Escreva um algoritmo que leia três valores (distintos), determine o maior valor e imprima esse valor com uma mensagem.

    3) Escreva um programa que lê um número x do terminal e imprime seu valor absoluto |x|, ou seja:
        |x| = x, se x > 0
        |x| = −x, se x < 0
        
    4) Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 222. Devem ser impressas as seguintes mensagens:
        ACESSO PERMITIDO, caso a senha seja válida.
        ACESSO NEGADO, caso a senha seja inválida.
    */

    //Questão 1:

    int inteiro, par;
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);

    par = inteiro % 2;
    if (par == 0){
        printf("O numero %d e par\n", inteiro);
    } else {
        printf("O numero %d e impar\n", inteiro);
    }

    //Questão 2:

    int x, y, z;
    printf("Digite tres numeros inteiro: ");
    scanf("%d, %d, %d", &x, &y, &z);

    if (x > y && x > z){
        printf("O numero %d e o maior\n", x);
    } else if (y > x && y > z){
        printf("O numero %d e o maior\n", y);
    } else if (z > x && z > y){
        printf("O numero %d e o maior\n", z);
    } else if (x == y && x > z){
        printf("O %d e igual a %d e maior que %d\n", x, y, z);
    } else if (x == z && x > y){
        printf("O %d e igual a %d e maior que %d\n", x, z, y);
    } else if (z == y && x > x){
        printf("O %d e igual a %d e maior que %d\n", z, y, x);
    } else {
        printf("Todos os numeros sao iguais\n");
    }

    //Questão 3:

    int num, absoluto;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if (num > 0){
        absoluto = num;
        printf("O numero absoluto de %d é %d\n", num, absoluto);
    } else if (num < 0){
        absoluto = 0 - num;
        printf("O numero absoluto de %d é %d\n", num, absoluto);
    } else {
        absoluto = 0;
        printf("O numero absoluto de %d é %d\n", num, absoluto);
    }

    //Questão 4:

    int senha = 222, input;
    printf("Digite a senha: ");
    scanf("%d", &input);

    if (input == senha){
        printf("ACESSO PERMITIDO\n");
    } else {
        printf("ACESSO NEGADO\n");
    }

    return 0;
}
