#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
