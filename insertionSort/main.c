#include <stdio.h>
#include <stdlib.h>
    void insertionSort(int* v, int n){
        int i = 0;
        int j = 1;
        int aux = 0;
            while(j<n){
                aux = v[j];
                i = j-1;
                while((i>=0) && (v[i] > aux)){
                    v[i+1] = v[i];
                    i = i - 1;
                }
                v[i+1] = aux;
                j = j+1;
        }
    }

int main()
{
    int vet[9] = {125,992,12,52,9,188,882,10,20};
    insertionSort(vet, 9);
    for(int count = 0; count < 9; count++) {
        printf("%d\n", vet[count]);
    }
    return 0;
}
