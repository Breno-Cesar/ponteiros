#include <stdio.h>

int main() {
    int inteiro = 2;
    float real = 6.7;
    char caractere = 'B';

    int *p_int = &inteiro;
    float *p_real = &real;
    char *p_char = &caractere;

    printf("Valores originais:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %.2f\n", real);
    printf("caractere = %c\n", caractere);

    *p_int = 5;
    *p_real = 10.5;
    *p_char = 'C';

    printf("\nValores modificados:\n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %.2f\n", real);
    printf("caractere = %c\n", caractere);

    return 0;
}
