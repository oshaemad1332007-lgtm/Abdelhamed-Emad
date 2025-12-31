#include <stdio.h>
void reverse1(int n)
{

    int y, k = 0;

    if (n > 9)
    {
        while (n > 0)
        {

            y = n % 10;
            k = (k * 10) + y;
            n /= 10;
        }
    }
    else
        k = n;
    printf("reverse %d", k);
}
int main()
{
    int n;
    scanf("%d", &n);

    reverse1(n);

    return 0;
}
