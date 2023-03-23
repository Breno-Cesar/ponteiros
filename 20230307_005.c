#include <stdio.h>

int ordenar(int *a, int *b, int *c) {
    int tmp;
    int igual = (*a == *b) && (*b == *c);
    if (*a > *b) { tmp = *a; *a = *b; *b = tmp; }
    if (*a > *c) { tmp = *a; *a = *c; *c = tmp; }
    if (*b > *c) { tmp = *b; *b = *c; *c = tmp; }
    return igual;
}

int main() {
    int a, b, c;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    int iguais = ordenar(&a, &b, &c);

    printf("Valores ordenados: %d %d %d\n", a, b, c);
    printf("Os valores %s sao iguais.\n", iguais ? "" : "nao");

    return 0;
}
