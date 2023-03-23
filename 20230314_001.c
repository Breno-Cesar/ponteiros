#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float* vetor, int tamanho, float* media, float* desvio) {
    // Calcula a média
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    *media = soma / tamanho;
    
    // Calcula o desvio padrão
    float soma_desvios = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma_desvios += pow(vetor[i] - *media, 2);
    }
    *desvio = sqrt(soma_desvios / tamanho);
}

int main() {
    int quantidade_alunos;
    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &quantidade_alunos);
    
    float* notas = (float*) malloc(quantidade_alunos * sizeof(float)); // aloca vetor dinâmico para notas
    
    // Lê as notas dos alunos
    for (int i = 0; i < quantidade_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    // Calcula média e desvio padrão
    float media, desvio;
    mediaDesvio(notas, quantidade_alunos, &media, &desvio);
    
    printf("Media das notas: %.2f\n", media);
    printf("Desvio padrao das notas: %.2f\n", desvio);
    
    free(notas); // libera memória alocada para vetor
    
    return 0;
}
