//1011 - Sphere
#include <stdio.h>

int main() {
   double pi=3.14159;
   double radius,volume;
   scanf("%lf",&radius);

        volume= (4.0/3)*pi*radius*radius*radius;
    printf("VOLUME = %0.3lf\n",volume);
    return 0;
}
