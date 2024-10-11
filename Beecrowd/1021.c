// 1021 - Banknotes and Coins
#include <stdio.h>

int main()
{
    double N;
    int calc;
    scanf("%lf", &N);

    calc = N * 100;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", (calc / 10000));
    printf("%d nota(s) de R$ 50.00\n", (calc % 10000) / 5000);
    printf("%d nota(s) de R$ 20.00\n", (((calc % 10000) % 5000) / 2000));
    printf("%d nota(s) de R$ 10.00\n", (((calc % 10000) % 5000) % 2000) / 1000);
    printf("%d nota(s) de R$ 5.00\n", ((((calc % 10000) % 5000) % 2000) % 1000) / 500);
    printf("%d nota(s) de R$ 2.00\n", (((((calc % 10000) % 5000) % 2000) % 1000) % 500) / 200);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", ((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) / 100);
    printf("%d moeda(s) de R$ 0.50\n", (((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) / 50);
    printf("%d moeda(s) de R$ 0.25\n", ((((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) / 25);
    printf("%d moeda(s) de R$ 0.10\n", (((((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) / 10);
    printf("%d moeda(s) de R$ 0.05\n", ((((((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) / 5);
    printf("%d moeda(s) de R$ 0.01\n", ((((((((((calc % 10000) % 5000) % 2000) % 1000) % 500) % 200) % 100) % 50) % 25) % 10) % 5);

    return 0;
}
