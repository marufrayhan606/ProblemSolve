//1006 - Average 2

#include <stdio.h>

int main() {
    double A,B,C,avg;
        scanf("%lf\n",&A);
        scanf("%lf\n",&B);
        scanf("%lf", &C);
        avg=(A*2 + B*3 + C*5)/(2+3+5);
    printf("MEDIA = %0.1lf\n",avg);

    return 0;
}
