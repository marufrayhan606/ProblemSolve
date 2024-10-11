//1010 - Simple Calculate
#include <stdio.h>

int main() {
    int a,b,d,e;
    float c,f,valor;
        scanf("%d %d %f", &a, &b, &c);
        scanf("%d %d %f", &d, &e, &f);
        valor=(b*c)+(e*f);
            printf("VALOR A PAGAR: R$ %.2f\n",valor);
    return 0;
}