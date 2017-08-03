#include <stdio.h>
#include <stdlib.h>

int main()

{

    int pri_termo, seg_termo, n_termo, aux, i;

    pri_termo = 0;
    seg_termo = 1;
    aux = 0;

    printf("Digite o numero de termos da sequencia de fibonacci: ");
    scanf("%d",&n_termo);

    printf("%d",seg_termo);

    for(i=0; i<n_termo; i++)
    {
        aux = pri_termo + seg_termo;
        pri_termo = seg_termo;
        seg_termo = aux;

        printf("%d",aux);
    }

    return 0;


}
