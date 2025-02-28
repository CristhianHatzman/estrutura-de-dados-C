#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[5], vet2[5], i, soma;

    printf("Informe os numeros do primeiro vetor: ");
    for(i=0;i<5;i++) {
        scanf("%d", &vet1[i]);
    }
        printf("Informe os numeros do primeiro vetor: ");
    for(i=0;i<5;i++) {
        scanf("%d", &vet2[i]);
    }

    for(i=0;i<5;i++) {
        soma = vet1[i] + vet2[i];
        printf("A soma dos numeros eh: %d \n", soma);
        soma=0;
    }
    return 0;
}
