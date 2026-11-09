/*
QUESTÃO: 
9. Escreva um programa em C que leia três números inteiros a, b e c e informe:
    - A média aritmética simples dos três valores;
    - A média ponderada dos três valores, considerando como pesos 10% (a), 50% (b) e 40% (c).
    - Modifique o programa para que seja possível informar os três pesos, além dos três valores.
*/

#include <stdio.h>

int main(){
    //letra a:
    int a, b, c;
    float soma, mediaS, mediaP, mediaPI, peso1, peso2, peso3;

    printf("Digite os valores para a media separados com , : ");
    scanf("%d, %d, %d", &a, &b, &c);
    soma = a+b+c;
    mediaS = soma/3;
    printf("Media simples: %.2f\n", mediaS);

    printf("========================================\n");

    //letra b:
    printf("Digite os valores para a media separada com , : ");
    scanf("%d, %d, %d", &a, &b, &c);
    soma = (a*0.1)+(b*0.5)+(c*0.4);
    mediaP = soma/3;
    printf("Media ponderada: %.2f\n", mediaP);

    printf("========================================\n");

    //letra c:
    printf("Digite os valores para a media separados com , : ");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("Digite os pesos (Ex.: 0.1) para cada valor separados com , : ");
    scanf("%f, %f, %f", &peso1, &peso2, &peso3);

    soma = (a*peso1)+(b*peso2)+(c*peso3);
    mediaPI = soma/3;
    printf("Media ponderada com pesos %.2f, %.2f e %.2f: %.2f\n", peso1, peso2, peso3, mediaPI);

    printf("========================================\n");
}