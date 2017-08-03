#include <stdio.h>
#include <stdlib.h>

int main (void){
    float idade, precoI, precoF, desconto = 0;
    printf("Digite a idade: ");
    scanf("%f", &idade);
    printf("Digite o preco do sapato: ");
    scanf("%f", &precoI);
    if(idade <= 18){
        desconto = precoI*0.1;
        precoF = precoI - desconto;
    }
    else{
        desconto = precoI*0.2;
        precoF = precoI - desconto;
    }
    printf("O valor do desconto eh: %.2f e o valor final do sapato eh: %.2f", desconto, precoF);
    return 0;
}
