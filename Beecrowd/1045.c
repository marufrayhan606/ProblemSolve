// 1045 - Triangle Types

#include <stdio.h>

void condition(double A, double B, double C);

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if (A >= B && A >= C)
    {
        condition(A, B, C);
    }
    else if (B >= C)
    {
        condition(B, A, C);
    }
    else
    {
        condition(C, A, B);
    }

    return 0;
}

void condition(double A, double B, double C)
{
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if (A * A == B * B + C * C)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (A * A > B * B + C * C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (A * A < B * B + C * C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if ((A == B || B == C || A == C) && (A != B || B != C || A != C))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}