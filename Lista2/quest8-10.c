/*
8) Escreva um programa que lê as medidas dos lados de um triângulo e determina seu tipo ou se não forma um triângulo:
    - Equilátero: 3 lados iguais
    - Isósceles: 2 lados iguais
    - Escaleno: 3 lados diferentes
    - Não forma um triângulo: se a soma de dois lados for menor que o terceiro lado.

9) Escreva um programa que lê um caractere da entrada.
    - Se não for uma letra, informe que não é uma letra.
    - Se for uma letra:
        - Verifique se está em maiúscula. Caso não esteja, converta para maiúscula.
        - Mostre a letra em maiúscula ao final

10) Escreva um programa que lê um caractere e informa:
    - Se é letra (e se for vogal ou consoante)
    - Se é número
    - Se é símbolo (valores ASCII de 33 a 126, exceto letras e números)

*/

#include <stdio.h>

int main(){
    
    //Questao 8: 

    float lado1, lado2, lado3;
    printf("Digite o lado do triangulo: ");
    scanf("%f, %f, %f", &lado1, &lado2, &lado3);

    if (lado1 == lado2 && lado2 == lado3){
        printf("Triangulo Equilatero\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
        printf("Triangulo Isosceles\n");
    } else if (lado1 != lado2 != lado3){
        printf("Triangulo Escaleno\n");
    } else{
        printf("Nao forma um triangulo\n");
    }

    //Questao 9:

    char letras;
    int letra, novoLetra;

    printf("Digite um caracter: ");
    scanf(" %c", &letras);
    letra = (int)letras;

    if ((letra >= 65 && letra <= 90) || (letra >= 97 && letra <= 122)){
        if (letra >= 65 && letra <= 90){
            printf("A letra foi %c\n", letras);
        } else {
            novoLetra = letra - 32;
            printf("A letra maiuscula sera %c\n", (char)novoLetra);
        }
    } else {
        printf("Nao e uma letra\n");
    }

    //Questao 10: 

    char caracter;
    int carac;

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);
    carac = (int)caracter;

    if ((carac >= 33 && carac <= 47) || (carac >=58 && carac <= 64) || (carac >= 91 && carac <= 96) || (carac >= 123 && carac <= 126)){
        printf("Voce digitou um simbolo\n");
    } else if (carac > 47 && carac <= 57){
        printf("Voce digitou um numero\n");
    } else if ((carac >= 65 && carac <= 90) || (carac >= 97 && carac <= 122)){
        if (carac == 65 || carac == 97 || carac == 69 || carac == 101 || carac == 73 || carac == 105 || carac == 79 || carac == 111 || carac == 85 || carac == 117){
            printf("Voce digitou uma vogal\n");
        } else {
            printf("Voce digitou uma consoante\n");
        }
    } else {
        printf("Voce nao digitou um caracter\n");
    }
}
