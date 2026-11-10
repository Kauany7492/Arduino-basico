#include <stdio.h>

void tabelaVer(int a, int b, char c){
    if(c == '&'){
        printf("Tabela AND\n");
        printf("%d\n", (int) a && (int) b);
    } else if(c == '|'){
        printf("Tabela OR\n");
        printf("%d\n", (int) a || (int) b);
    } else if(c == '!'){
        printf("Tabela NOT\n");
        printf("%d\n", (int) !a);
        printf("%d\n", (int) !b);
    } else if(c == '.'){
        printf("Tabela NOR\n");
        printf("%d\n", !((int) a || (int) b));
    } else if(c == '^'){
        printf("Tabela XOR\n");
        printf("%d\n", (int) a ^ (int) b);
    } else if(c == '$'){
        printf("Tabela NAND\n");
        printf("%d\n", !((int) a && (int) b));
    } else if(c == '\\'){
        printf("Tabela XNOR\n");
        printf("%d\n", ((int) a ^ (int) b));
    } else{
        printf("Tabela invalida");
    }
}

int main(){
    // tabela verdade 
    int valor1;
    printf("Digite o valor do primeiro boleano: ");
    scanf("%d", &valor1);
    printf("valor recebido: %d\n", valor1);

    int valor2;
    printf("Digite o valor do segundo boleano: ");
    scanf("%d", &valor2);
    printf("valor recebido: %d\n", valor2);

    char tabela;
    printf("Digite qual tabela verdade (& - and, | - or, ! - not, ^ - xor, . - nor, $ - nand, \\ - xnor): ");
    scanf("  %c", &tabela);
    printf("tabela recebido: %c\n", tabela);

    tabelaVer(valor1, valor2, tabela);
    return 0;
}
