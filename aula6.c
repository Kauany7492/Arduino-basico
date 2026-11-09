#include <stdio.h>

int main(){
    int num1, num2, maior;
    printf("Digite os dois numeros: ");
    scanf("%d, %d", &num1, &num2);

    if(num1>num2){
        printf("O numero %d e maior que o numero %d\n", num1, num2);
    } else if(num1 == num2){
        printf("O numero %d e igual ao numero %d\n", num2, num1);
    } else{
        printf("O numero %d e maior que o numero %d\n", num2, num1);
    }


    maior = num1>num2 ? num1 : num2;
    printf("%d e maior\n", maior);

    int idade;
    float altura;

    printf("Digite a idade e altura: ");
    scanf("%d, %f", &idade, &altura);

    if(idade >= 12){
        if(altura >= 1.50){
            printf("pode entraar");
        } else{
            printf("nao pode entrar");
        }
    }
}