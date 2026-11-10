#include <stdio.h>

int main(){
    //Questao 1:
    int num, aux;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        if(num%2 == 0){
            aux=aux+i;
        }
    }
    printf("A soma e: %d\n", aux);
    printf("========================================\n");

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Questao 2:

    int positivo, div=0;
    printf("Digite um numero positivo: ");
    scanf("%d", &positivo);

    for(int i=1; i<=positivo; i++){
        if(positivo%i == 0){
            div++;
        }
    }
    printf("%d\n", div);
    
    if(div == 0){
        printf("O numero %d e primo\n", positivo);
    }
    printf("========================================\n");

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Questao 3:

    int n=11;
    for(int i=1; i<n; i++){
       // n = n-1;
        printf("%d   %d\n", i, n-i);
    }
    printf("========================================\n");

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Questao 4:

    int inteiro=0, soma=0;
    printf("Digite um numero inteiro: ");
    scanf(" %d", &inteiro);


    int aux2 = 1;
    for(int i=1; i<=inteiro; i++){
        for(int j=1; j<=i; j++){
            aux2= aux2 * j;
        }
    }
    soma = soma + aux2;
    printf("S = %d\n", soma);
}
