#include <stdio.h>
#include <stdlib.h>

int *searchValor(int *inicio, int *final, int valor) {
    while(inicio <= final) {
        if (*inicio == valor) {
            return inicio;
        }
        inicio++;
    }
    return NULL;
}

int main() {
    int v[] = {1, 2, 3, 2, 4, 5, 2, 6, 7, 8};
    int *inicio = &v[0];
    int *final = &v[9];
    int valor = 2;

    int *resultado = NULL;
    while((resultado = searchValor(inicio, final, valor)) != NULL) {
        printf("Valor %d encontrado no endereço %p\n", valor, resultado);
        inicio = resultado + 1;
    }

    return 0;
}
