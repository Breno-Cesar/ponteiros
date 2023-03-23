#include <stdio.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x = 1.2, y = 3.4;
    
    printf("Antes da troca: x=%.1f, y=%.1f\n", x, y);
    
    troca(&x, &y);
    
    printf("Depois da troca: x=%.1f, y=%.1f\n", x, y);
    
    return 0;
}
