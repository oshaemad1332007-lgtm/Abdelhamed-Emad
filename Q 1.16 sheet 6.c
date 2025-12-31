#include <stdio.h>
int gcd1(int n, int x)
{
    while (n != x)
    {

        if (n > x)
            n -= x;
        else
            x -= n;
    }
    return x;
}
int main()
{
    int n, y;
    scanf("%d%d", &n, &y);

    printf("%d", gcd1(n, y));

    return 0;
}
