#include <stdio.h>

int main()
{

    int n, y, k = 0;
    scanf("%d", &n);
    while (n > 0)
    {

        y = n % 10;
        k = (k * 10) + y;
        n /= 10;
    }
    printf("%d", k);
    return 0;
}
