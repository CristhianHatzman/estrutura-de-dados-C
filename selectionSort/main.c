#include <stdio.h>
#include <stdlib.h>
    void selectionSort(int* v, int n) {
        int i, j, min, aux;
        for(i = 0; i <(n-1); i++){
        min = i;
            for(j = (i+1);j<n ;j++){
                if(v[j] < v[min]){
                    min = j;
                }
            }
                if (v[i] != v[min]){
                    aux = v[i];
                    v[i] = v[min];
                    v[min] = aux;
                }
            }
        }

int main()
{
    int vet[7] = {125,992,12,52,9,188,882};
    selectionSort(vet, 7);
    for(int count = 0; count < 7; count++) {
        printf("%d\n", vet[count]);
    }
    return 0;
}
