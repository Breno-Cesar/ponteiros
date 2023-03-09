#include <stdio.h>
#include <stdlib.h>
void ponteiros(float *primeiro, float *ultimo){
    for(;primeiro<=ultimo; primeiro++){
        printf("%f\n", *primeiro);
    }
}
int main()
{
    float v1[]= {1.1, 1.2, 1.3, 1.4, 1.5};
    float v2[]= {2.1, 4.2, 1.5, 3.4, 1.7, 6.1};
    float v3[]= {1.6, 33.2, 17.3, 1.71, 1.54};
    printf("Primeira parte do v1: ");
    ponteiros(&v1[0], &v1[2]);

    printf("Segunda parte do v1: ");
    ponteiros(&v1[3], &v1[4]);

    printf("Primeira parte do v2: ");
    ponteiros(&v2[0], &v2[3]);

    printf("Segunda parte do v2: ");
    ponteiros(&v2[4], &v2[5]);

    printf("Primeira parte do v3: ");
    ponteiros(&v3[0], &v3[1]);

    printf("Segunda parte do v3: ");
    ponteiros(&v3[2], &v3[4]);

    return 0;
}
