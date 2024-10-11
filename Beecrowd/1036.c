//1036 - Bhaskara's Formula
#include <stdio.h>
#include <math.h>
int main() {
    double a , b , c , x1 , x2;

   
    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = ((-b + sqrt((b*b) - 4*a*c)) / (2*a));
    x2 = ((-b - sqrt((b*b) - 4*a*c)) / (2*a));
        if ( a==0 || ((b*b) - 4*a*c) < 0)
        {
            printf("Impossivel calcular\n");
        }else{
            printf("R1 = %0.5lf\n", x1);
            printf("R2 = %0.5lf\n", x2);
        }
        
    

    return 0;
}
