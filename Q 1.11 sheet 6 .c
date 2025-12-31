#include <stdio.h>
int isprime1(int n)
{
    if (n <= 1)
    {
        printf("not prime");
        return 0;
    }

    for (int i = 2; i <= 0.5 * n; i++)
    {
        if (n % i == 0)
        {
            printf("not prime");
            return 0;
        }
    }

    printf("prime");
    return 0;
}

int main()
{
    int x;
    scanf("%d", &x);
    isprime1(x);
    return 0;
}
