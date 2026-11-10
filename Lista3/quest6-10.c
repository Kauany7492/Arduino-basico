/*
QUESTÕES: 
 6. Escreva um programa que verifica se um número inteiro é primo, isto é, possui divisão exata somente pelo próprio número ou por 1.

 7. Escreva um programa que verifica se um número dado é perfeito. Um número perfeito é aquele cuja soma de seus divisores próprios (excluindo ele mesmo) é igual ao próprio número. Exemplo: 28 é um número perfeito, pois a soma de seus divisores (1 + 2 + 4 + 7 + 14) é igual ao próprio número (28).

 8. Escreva um programa que imprime um triângulo de caracteres [] com o número de linhas informado.

 9. Escreva um programa que imprime um triângulo centralizado de caracteres [] com o número de linhas informado.

 10. Peça ao usuário um número inteiro positivo. Use um for para exibir todos os divisores desse número. Depois, pergunte se o usuário quer testar outro número. Repita essa operação usando um while até que a resposta seja ’n’.

*/

#include <stdio.h>

int main(){
    //Questão 6: 
    int positivo, div=0;
    printf("\nDigite um numero positivo: ");
    scanf("%d", &positivo);

    for(int i=1; i<=positivo; i++){
        if(positivo%i == 0){
            div++;
        }
    }
    
    if(div == 2){
        printf("O numero %d e primo\n", positivo);
    } else{
        printf("O numero %d nao e primo\n", positivo);
    }

    //Questão 7:
    int num, soma = 0;
    printf("\nDigite um numero positivo: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++){
        if (num % i == 0){
            soma += i;
        }
        
    }

    if (soma == num){
        printf("%d e um numero perfeito\n", num);
    } else{
        printf("%d nao e um numero perfeito\n", num);
    }
    
    //Questão 8:
    int linhas = 0;
    printf("\nDigite a quantidade de linhas: ");
    scanf("%d", &linhas);

    for(int i = 1; i <= linhas; i++){
        for(int j = 1; j <= i; j++){
            printf("[]");
        }
        printf("\n");
    }

    //Questão 9:
    int linha = 0;
    printf("\nDigite a quantidade de linhas: ");
    scanf("%d", &linha);

    for(int i = 1; i <= linha; i++){
        for(int k = 1; k <= linha - i; k++){
            printf(" ");
        }

        for(int j = 1; j <= i; j++){
            printf("[]");
        }
        printf("\n");
    }

    //Questão 10:
    int np, divisor;
    char res;

    printf("\nDeseja testar um numero? (s/n): ");
    scanf(" %c", &res);

    while (res == 's' || res == 'S'){
        printf("Digite um numero: ");
        scanf("%d", &np);

        printf("Divisores: ");
        for(int i = 1; i <= np; i++){
            if(np % i == 0){
                divisor = i;
                printf("%d, ", divisor);
            }
        }

        printf("\nDeseja testar outro numero? (s/n): ");
        scanf(" %c", &res);
    }

    if(res == 'n' || res == 'N'){
        printf("Encerrando...\n");
    }
    
}
