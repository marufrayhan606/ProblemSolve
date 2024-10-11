// 1397 - Game of The Greatest
#include <stdio.h>

int main()
{
    int N, Score1 = 0, Score2 = 0, x, y;
    for (int i = 0;; i++)
    {
        scanf("%d", &N);

        if (N >= 1 && N <= 10)
        {
            for (int i = 0; i < N; i++)
            {
                scanf("%d %d", &x, &y);

                if (x > y && x >= 0 && y <= 10)
                {
                    Score1++;
                }
                else if (y > x && x >= 0 && y <= 10)
                {
                    Score2++;
                }
                else if (x == y && x >= 0 && y <= 10)
                {
                }
            }
            printf("%d %d\n", Score1, Score2);
            Score1 = 0;
            Score2 = 0;
        }
        else if (N == 0)
        {
            break;
        }
    }

    return 0;
}