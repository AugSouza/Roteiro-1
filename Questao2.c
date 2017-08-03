#include <stdio.h>
#include <stdlib.h>

int main()

{
    float Sal_Bruto, Sal_Liquido, desconto;

    printf("Informe o valor do salario bruto: ");
    scanf("%f",&Sal_Bruto);

    if(Sal_Bruto <= 420)
        desconto = Sal_Bruto * 0.08;
    else
        if(Sal_Bruto > 420 && Sal_Bruto <= 1350)
            desconto = Sal_Bruto * 0.09;
        else
            desconto = Sal_Bruto * 0.1;

    Sal_Liquido = Sal_Bruto - desconto;

    printf("\nO valor do desconto eh: %3.2f\n", desconto);
    printf("O valor do salario liquido eh: %3.2f",Sal_Liquido);

    return 0;


}
