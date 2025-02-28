#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[4], i, notas=0;
    float media=0;
    printf("Digite as notas do aluno: ");
    for(i=0;i<4;i++) {
        scanf("%d", &vet[i]);
    }
    for(i=0;i<4;i++){
        notas += vet[i];
    }
    media = notas/4;

    printf("A media das notas do aluno eh: %.2f", media);

    return 0;
}
