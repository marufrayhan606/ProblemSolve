// 1051 - Taxes
#include <stdio.h>

int main()
{
    float Salary;
    scanf("%f", &Salary);

    if (Salary > 0 && Salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (Salary > 2000.01 && Salary <= 3000.00)
    {
        printf("R$ %.2f\n", (Salary - 2000) * 0.08);
    }
    else if (Salary > 3000.01 && Salary <= 4500.00)
    {
        printf("R$ %.2f\n", ((Salary - 3000) * 0.18) + (3000 - 2000) * 0.08);
    }
    else if (Salary > 4500)
    {
        printf("R$ %.2f\n", ((Salary - 4500) * 0.28) + ((4500 - 3000) * 0.18) + (3000 - 2000) * 0.08);
    }

    return 0;
}
