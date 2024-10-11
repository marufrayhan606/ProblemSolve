//1012 - Area
#include <stdio.h>

int main() {
   double A,B,C,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);

    printf("TRIANGULO: %0.3lf\n",(1.0/2)*A*C);
    printf("CIRCULO: %0.3lf\n",pi*C*C);
    printf("TRAPEZIO: %0.3lf\n",((A+B)/2)*C);
    printf("QUADRADO: %0.3lf\n",B*B);
    printf("RETANGULO: %0.3lf\n",A*B);


    return 0;
}
