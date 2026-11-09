#include <stdio.h>

int calculadora(char op, int a, int b){
    float result;
    
    if(op == '+'){
        result = a+b;
    } else if(op == '-'){
        result = a-b;
    } else if(op == 'x'){
        result = a*b;
    } else if(op == '/'){
        if(b != 0){
            result = (float) a/b;
        } else{
            printf("Nao e possivel dividir por 0.");
        }
    } else{
        printf("Operacao invalida.");
        return 0;
    }

    printf("O resultado foi: %f\n", result);
}

int main() {
    float num1;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("O numero digitado foi: %f\n", num1);

    float num2;
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("O numero digitado foi: %f\n", num2);

    char operacao;
    printf("Digite a operacao (+, -, x ou /): ");
    scanf("  %c", &operacao);
    printf("A operacao digitada foi: %c\n", operacao);

    calculadora(operacao, num1, num2);
}