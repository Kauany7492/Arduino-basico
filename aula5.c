#include <stdio.h>

int main(){
    float altura1, altura2;
    printf("Digite a altura das duas pessoas: ");
    scanf("%f, %f", &altura1, &altura2);
    if (altura1 > altura2){
        printf("A pessoa com %.2f é maior que a com %.2f\n", altura1, altura2);
    } else if (altura2 > altura1){
        printf("A pessoa com %.2f é maior que a com %.2f\n", altura2, altura1);
    } else{
        printf("Ambas pessoas tem a mesma altura\n");
    }

    printf("\n========================================\n");

    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(num < 0){
        printf("O %d é negativo\n", num);
    } else if(num > 0){
        printf("O %d é positivo\n", num);
    } else{
        printf("O %d é igual a 0\n", num);
    }

    printf("\n========================================\n");

    float nota1, nota2, media;
    printf("Digite as notas do aluno: ");
    scanf("%f, %f", &nota1, &nota2);
    media = (nota1 + nota2)/2;

    if(media >= 7){
        printf("Aluno aprovado com %.2f\n", media);
    } else{
        printf("Aluno reprovado com %.2f\n", media);
    }
}