#include <stdio.h>

int main(){
    int v[10] = {10, 20, 15, 2, 25, 102, 220, 89, 79, 100};
    int qt=0;

    for(int i = 0; i<10; i++){
        if(v[i] % 2 != 0){
            printf("numero impar %d", v[i]);
            qt++;
        }
    }
    printf("Quantidade: %d", qt);
}
