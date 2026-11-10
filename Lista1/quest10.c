/*
QUESTÃO: 
10. Escreva um programa em C que:
    - Leia um caractere (char) do usuário e converta-o para seu valor inteiro (int) correspondente na tabela ASCII.
    - Leia um número inteiro (int) e converta-o para float e double, exibindo os resultados com diferentes precisões.
    - Leia um número decimal (float) e converta-o para int, demonstrando a perda da parte decimal.
    - Leia um número decimal do tipo double e converta-o para float, mostrando a perda de precisão devido à conversão.
*/

#include <stdio.h>

int main(){
    printf("========================================\n");
    
    //letra a: 
    char caracter;
    printf("Digite um caracter: ");
    scanf("%c", &caracter);
    printf("Caracter: %c, valor ASCII: %d\n", caracter, (int)caracter);

    printf("========================================\n");

    //letra b:
    int inteiro;
    printf("Digite um inteiro: ");
    scanf("%d", &inteiro);
    printf("Inteiro: %d, Float: %f, Double: %f\n", inteiro, (float)inteiro, (double)inteiro);

    printf("========================================\n");

    //letra c:
    float decimal;
    printf("Digite um decimal (float): ");
    scanf("%f", &decimal);
    printf("Decimal (float): %f, inteiro (truncado): %d\n", decimal, (int)decimal);

    printf("========================================\n");

    //letra d:
    double dec;
    printf("Digite um decimal (double): ");
    scanf("%lf", &dec);
    printf("Double: %.10f, float: %f\n", dec, (float)dec);

    printf("========================================\n");
}
