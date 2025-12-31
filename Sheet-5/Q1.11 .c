#include <stdio.h>

int main()
{

    int n, y, k = 0;
    scanf("%d", &n);
    int l = n;
    while (n > 0)
    {

        y = n % 10;
        k = (k * 10) + y;
        n /= 10;
    }

    if (l == k)
        printf(" %d is a palindrome.", l);
    else
        printf(" %d is not a palindrome.", l);

    return 0;
}
