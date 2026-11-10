/*
    1) Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão ser impressos o maior e o menor elemento desse vetor.

    2) Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7. Ao final, imprima esse vetor na tela.

    3) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.

*/

#include <stdio.h>

int main(){
    //Questão 1: 
    int v1[10], maior=0, menor=0;
    for(int i=0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%d", &v1[i]);
        if(v1[i]>maior){
            maior = v1[i];
        } else{
            menor = v1[i];
        }
    }
    printf("Maior: %d \nMenor: %d\n", maior, menor);

    //Questão 2:
    int vm7[100], aux=0, num=1;
    while(aux<100){
        if(num%7 !=0){
            vm7[aux] = num;
            aux++;
        }
        num++;
    }
    for(int i=0; i<100; i++){
        printf("%d ", vm7[i]);
    }
    printf("\n");

    //Questão 3:
    
}