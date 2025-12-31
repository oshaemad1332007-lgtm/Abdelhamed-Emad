#include <stdio.h>

int main()
{
    int n, ff = 1;
    printf(" Enter your num : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        ff *= i;
    }
    printf("Factorial: %d", ff);

    return 0;
}
