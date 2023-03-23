#include <stdio.h>
#include <stdlib.h>

double** alocaMatriz(int linhas, int colunas) {
    double **matriz;
    int i;

    matriz = (double **) malloc(linhas * sizeof(double *));
    for (i = 0; i < linhas; i++) {
        matriz[i] = (double *) malloc(colunas * sizeof(double));
    }

    return matriz;
}

void liberaMatriz(double **matriz, int linhas) {
    int i;

    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
}

void leMatriz(double **matriz, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }
}

void somaMatrizes(double **matriz1, double **matriz2, double **matrizSoma, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void imprimeMatriz(double **matriz, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%.2lf\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas, colunas;
    double **matriz1, **matriz2, **matrizSoma;

    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &colunas);

    matriz1 = alocaMatriz(linhas, colunas);
    matriz2 = alocaMatriz(linhas, colunas);
    matrizSoma = alocaMatriz(linhas, colunas);

    printf("Leitura da primeira matriz:\n");
    leMatriz(matriz1, linhas, colunas);

    printf("Leitura da segunda matriz:\n");
    leMatriz(matriz2, linhas, colunas);

    somaMatrizes(matriz1, matriz2, matrizSoma, linhas, colunas);

    printf("Soma das matrizes:\n");
    imprimeMatriz(matrizSoma, linhas, colunas);

    liberaMatriz(matriz1, linhas);
    liberaMatriz(matriz2, linhas);
    liberaMatriz(matrizSoma, linhas);

    return 0;
}
