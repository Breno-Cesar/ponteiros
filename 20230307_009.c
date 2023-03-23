#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* encontrar_letra(char* string, char letra, int* tamanho_vetor) {
    int tamanho_string = strlen(string);
    int* posicoes = (int*) malloc(tamanho_string * sizeof(int)); 
    int contador = 0;
    
    for (int i = 0; i < tamanho_string; i++) {
        if (string[i] == letra) {
            posicoes[contador] = i; 
            contador++;
        }
    }
    
    *tamanho_vetor = contador; 
    
    return posicoes; 
}

int main() {
    char string[] = "paralelepipedo";
    char letra = 'p';
    int tamanho_vetor;
    int* posicoes = encontrar_letra(string, letra, &tamanho_vetor);
    
    printf("A letra '%c' aparece nas posicoes: ", letra);
    for (int i = 0; i < tamanho_vetor; i++) {
        printf("%d ", posicoes[i]);
    }
    printf("\n");
    
    free(posicoes); // libera memória alocada para vetor
    
    return 0;
}
