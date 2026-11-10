/*
5) Escreva um programa que leia um número inteiro representando um ano e verifica se ele é bissexto. Um ano é bissexto se:
    É divisível por 4 e não divisível por 100, OU
    É divisível por 400

6) Escreva um programa que receba duas notas de um aluno. Suponha que as notas estejam entre 0.0 e 10.0. Calcule e mostre:
    A média aritmética das notas
    A mensagem:
        Reprovado, se média < 3.0
        Aprovado, se média ≥ 6.0
        Recuperação, nos demais casos

7) Escreva um programa que lê três números inteiros e os imprime em ordem crescente. Considere a árvore abaixo para auxiliar na construção da solução.
*/

#include <stdio.h>

int main(){

    //Questão 5:

    int ano, bissexto;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    bissexto = ano%400;
    if (bissexto == 0){
        printf("O ano %d e bissexto\n", ano);
    } else{
        printf("O ano %d nao e bissexto\n", ano);
    }

    //Questão 6:

    float nota1, nota2, media;
    printf("Digite sua primeira e sua segunda nota respectivamente: ");
    scanf("%f, %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;

    if (media < 3.0){
        printf("Reprovado: %.2f\n", media);
    } else if (media >= 6.0){
        printf("Aprovado: %.2f\n", media);
    } else {
        printf("Recuperacao: %.2f\n", media);
    }

    //Questao 7:

    int num1, num2, num3;
    printf("Digite 3 numeros inteiros: ");
    scanf("%d, %d, %d", &num1, &num2, &num3);

    if(num1 != num2 && num2 != num3 && num1 != num3){
        if (num1 > num2 && num2 > num3){
            printf("%d > %d > %d\n", num1, num2, num3);
        } else if (num1 > num2 && num2 < num3 && num1 > num3){
            printf("%d > %d > %d\n", num1, num3, num2);
        } else if (num1 > num2 && num2 < num3 && num1 < num3){
            printf("%d > %d > %d\n", num3, num1, num2);
        } else if (num2 > num1 && num2 > num3 && num1 > num3){
            printf("%d > %d > %d\n", num2, num1, num3);
        } else if (num2 > num1 && num2 > num3 && num1 < num3){
            printf("%d > %d > %d\n", num2, num3, num1);
        } else if (num2 > num1 && num2 < num3){
            printf("%d > %d > %d\n", num3, num2, num1);
        } else{
            printf("Um dos numeros sao iguais: %d, %d, %d\n", num1, num2, num3);
        }
    } else {
        printf("Todos os numeros sao iguais\n");
    }
}