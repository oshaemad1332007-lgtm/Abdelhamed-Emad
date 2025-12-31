#include <stdio.h>

int main()
{
    int x = 1, y = 0, c;
    scanf("%d", &c);
    for (int i = 1; i <= c; i++)
    {
        printf("%d ", y);
        y = y + x;
        x = y - x;
    }

    return 0;
}
