#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2; 
    int n = 3; 
    
    int** matriz = (int**) malloc(m * sizeof(int*)); // aloca vetor de ponteiros
    
    // aloca cada linha da matriz
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*) malloc(n * sizeof(int));
    }
    
    
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    
    // a) Imprime valores da matriz usando aritmética de ponteiros
    printf("Matriz usando aritmetica de ponteiros:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *((*(matriz + i)) + j));
        }
        printf("\n");
    }
    
    // b) Imprime valores da matriz usando índices
    printf("\nMatriz usando indices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // libera memória alocada para a matriz
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
    
    return 0;
}
