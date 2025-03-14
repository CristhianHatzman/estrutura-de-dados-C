#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* v, int n) {
        int i, fim, aux;
        for(fim = n - 1; fim > 0; --fim){
            for(i = 0; i < fim; i++) {
                if(v[i] > v[i +1]){
                    aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] = aux;
                }
            }
        }
    }

int main()
{
    int vet[5] = {512,12,99,22,1250};
    BubbleSort(vet, 5);

    for(int cont = 0; cont < 5; cont++) {
        printf("%d", vet[cont]);
    }
    return 0;
}
