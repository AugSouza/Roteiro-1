#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num, maior, menor;
    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;
    while(menor != 0){
        printf("Digite outro numero: \n");
        scanf("%d", &menor);
        if(maior < menor){
            maior = menor;
        }
    }
    printf("O maior numero eh: %d", maior);
    return 0;
}
