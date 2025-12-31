#include <stdio.h>
void fib(int n)
{
    int y = 0, x = 1;
    for (int i = 1; i <= n; i++)
    {

        printf("%d ", y);
        y += x;
        x = y - x;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fib(n);

    return 0;
}
