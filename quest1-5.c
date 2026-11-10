/*
QUESTÕES:  
 1. Escreva um programa que faz a leitura de um valor N inteiro positivo e imprime os números de N até 1 em ordem decrescente.

 2. Escreva um programa que imprime a tabela ASCII com valores em decimal (formato "%03d"), octal ("%03o"), hexadecimal ("%03X") e o caractere correspondente ("%02c"). Imprima apenas os caracteres de 33 a 126.

 3. Escreva um programa que calcule ab (a elevado a b), onde ambos os valores são inteiros positivos, utilizando apenas multiplicações em um laço.

 4. O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo: 12 = 1, 22 = 1 + 3, 32 = 1 + 3 + 5, 42 = 1 + 3 + 5 + 7, etc.

 5. Faça um programa que, dado um número, mostre o seu fatorial. O fatorial de um número é a multiplicação desse número por todos os números menores que ele até 1.
*/

#include <stdio.h>

int main(){
    //Questão 1:
    int np;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &np);

    for(int i = 0; i < np; i++){
        printf("%d ", (np - i));
    }
    printf("\n");

    //Questão 2:
    printf("\nDEC   OCT   HEX   CHR");
    for(int i = 33; i <= 126; i++){
        printf("%03d   %03o   %03X   %02c\n", i, i, i, i);
    }

    //Questão 3:
    int a, b, c = 1;
    printf("\nDigite a base e a potencia (Ex.: 2, 3 -> 2³): ");
    scanf("%d, %d", &a, &b);

    for(int i = 1; i <= b; i++){
        c *= a;
    }
    printf("%d elevado a %d e: %d\n", a, b, c);

    //Questão 4: 
    int nump, quad = 0;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &nump);

    for(int i=1; i <= nump; i++){
        int impar = (2*i) - 1;
        quad += impar;
        if(i < nump){
            printf("%d + ", impar);
        } else{
            printf("%d", impar);
        }
    }
    printf("\n%d ao quadrado e: %d\n", nump, quad);

    //Questão 5: 
    int num, fat=1;
    printf("\nDigite um nume inteiro: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        fat *= i;
    }
    printf("%d\n", fat);
}