#include <stdio.h>

#define TAM 8

int main() {
    int array[TAM];
    int *ptr;
    
    // Leitura do array
    printf("Digite %d valores inteiros:\n", TAM);
    for (ptr = array; ptr < array + TAM; ptr++) {
        scanf("%d", ptr);
    }
    
    // Impressão do dobro de cada valor e dos endereços com valor par
    printf("\nDobro de cada valor:\n");
    for (ptr = array; ptr < array + TAM; ptr++) {
        printf("%d ", (*ptr) * 2);
        if (*ptr % 2 == 0) {
            printf("(endereco: %p)", ptr);
        }
        printf("\n");
    }
    
    return 0;
}
