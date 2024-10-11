// 2987 - Balloon of Honor
#include <stdio.h>

int main()
{
    char L;
    char letter = 'A';
    int i;

    scanf("%c", &L);

    for (i = 1; i <= 26; i++)
    {
        letter++;
        if (L == 'A')
        {
            printf("1\n");
            break;
        }

        else if (L == letter)
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    return 0;
}