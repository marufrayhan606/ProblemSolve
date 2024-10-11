// 1048 - Salary Increase
#include <stdio.h>

int main()
{
    float Salary;
    scanf("%f", &Salary);

    if (Salary > 0 && Salary <= 400.00)
    {
        printf("Novo salario: %.2f\n", Salary + (Salary * 0.15));
        printf("Reajuste ganho: %.2f\n", (Salary * 0.15));
        printf("Em percentual: 15 %%\n");
    }
    else if (Salary > 400.01 && Salary <= 800.00)
    {
        printf("Novo salario: %.2f\n", Salary + (Salary * 0.12));
        printf("Reajuste ganho: %.2f\n", (Salary * 0.12));
        printf("Em percentual: 12 %%\n");
    }
    else if (Salary > 800.01 && Salary <= 1200.00)
    {
        printf("Novo salario: %.2f\n", Salary + (Salary * 0.1));
        printf("Reajuste ganho: %.2f\n", (Salary * 0.1));
        printf("Em percentual: 10 %%\n");
    }
    else if (Salary > 1200.01 && Salary <= 2000.00)
    {
        printf("Novo salario: %.2f\n", Salary + (Salary * 0.07));
        printf("Reajuste ganho: %.2f\n", (Salary * 0.07));
        printf("Em percentual: 7 %%\n");
    }
    else if (Salary > 2000)
    {
        printf("Novo salario: %.2f\n", Salary + (Salary * 0.04));
        printf("Reajuste ganho: %.2f\n", (Salary * 0.04));
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
