// 2061 - Closing Tabs
#include <stdio.h>
int main()
{
    int initial, action, added = 0, closed = 0;
    char act[7];
    scanf("%d %d", &initial, &action);

    for (int i = 0; i < action; i++)
    {
        scanf("%s", act);

        if (act[0] == 'f')
        {
            added++;
        }
        else if (act[0] == 'c')
        {
            closed++;
        }
    }
    printf("%d\n", (initial + added) - closed);

    return 0;
}
