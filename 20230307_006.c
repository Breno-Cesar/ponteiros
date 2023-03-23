#include <stdio.h>

#define TAM 5

int somar_arrays(int *arr1, int *arr2, int *soma, int tam) {
    if (arr1 == NULL || arr2 == NULL || soma == NULL) {
        return 0;
    }
    
    
    if (tam != TAM) {
        return 0;
    }
    
    
    for (int i = 0; i < tam; i++) {
        soma[i] = arr1[i] + arr2[i];
    }
    
    return 1;
}

int main() {
    int arr1[TAM] = {1, 2, 3, 4, 5};
    int arr2[TAM] = {5, 4, 3, 2, 0};
    int soma[TAM];
    
    int result = somar_arrays(arr1, arr2, soma, TAM);
    
    if (result == 1) {
        printf("Resultado da soma:\n");
        for (int i = 0; i < TAM; i++) {
            printf("%d ", soma[i]);
        }
        printf("\n");
    } else {
        printf("Os arrays devem ter o mesmo tamanho.\n");
    }
    
    return 0;
}
