//1043 - Triangle

#include <stdio.h>
#include <math.h>
int main() {
    float A , B , C , peri, area;
    scanf("%f %f %f", &A, &B, &C);

        peri = A + B + C;
        area = 0.5 * (A + B) * C;

        if (A + B > C && A + C > B && B + C > A)
        {
            printf("Perimetro = %.1f\n", peri );
        }else{
            printf("Area = %.1f\n",area);
        }
        
    

    return 0;
}
