#include <stdio.h>

void min_max(int *v, int n, int *min, int *max) {
    if (v == NULL || min == NULL || max == NULL) {
        return;
    }
    
    *min = *max = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] < *min) {
            *min = v[i];
        }
        if (v[i] > *max) {
            *max = v[i];
        }
    }
}

int main() {
    int v[] = {10, 8, 12, 6, 15, 9};
    int n = sizeof(v) / sizeof(int);
    int min, max;
    
    min_max(v, n, &min, &max);
    
    printf("O menor elemento do vetor e %d e o maior e %d\n", min, max);
    
    return 0;
}
