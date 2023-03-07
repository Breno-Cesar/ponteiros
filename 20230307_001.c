#include <stdio.h>
#include <stdlib.h>
void ponteiros(float* primeiro, float* ultimo){
    for(;primeiro<=ultimo; primeiro++){
        printf("%f\n", *primeiro);
    }
}
int main()
{
    float v[5]= {1.1, 1.2, 1.3, 1.4, 1.5};
    ponteiros(&v[0], &v[4]);
    return 0;
}
