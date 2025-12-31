#include <stdio.h>
void pattern(int a, int b)
{
    printf("Printing Pattern with Size %d by %d :\n", a, b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    pattern(x, y);
    return 0;
}
