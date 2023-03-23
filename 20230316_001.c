#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int)); // aloca vetor dinâmico
    if (vetor == NULL) { // verifica se a alocação falhou
        printf("Erro: nao foi possivel alocar memoria para o vetor.\n");
        exit(1);
    }
    
    // Lê os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    return vetor;
}

void encontraMaiorMenor(int* vetor, int n, int* maior, int* menor) {
    // Inicializa maior e menor com o primeiro elemento do vetor
    *maior = vetor[0];
    *menor = vetor[0];
    
    // Percorre o vetor para encontrar o maior e o menor valor
    for (int i = 1; i < n; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int* vetor = alocaVetor(n);
    
    int maior, menor;
    encontraMaiorMenor(vetor, n, &maior, &menor);
    
    printf("O maior valor do vetor e: %d\n", maior);
    printf("O menor valor do vetor e: %d\n", menor);
    
    free(vetor); // libera memória alocada para vetor
    
    return 0;
}
