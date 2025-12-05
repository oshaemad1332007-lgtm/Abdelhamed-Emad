#include <stdio.h>

int GCD(int n, int x)
{

    while (n != x)
    {

        if (n > x)
            n -= x;
        else
            x -= n;
    }
    printf("The Greatest Common Divisor (GCD) is : %d", x);
    return 0;
}

int main()
{
    int n, x;

    printf("Enter the first number: ");
    scanf("%d", &n);

    printf("Enter the fsecond number: ");
    scanf("%d", &x);

    GCD(n, x);
    return 0;
}
