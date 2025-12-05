#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;
    printf("Enter an integer:");
    scanf("%d", &n);
    int z = n;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    printf("The sum of digits of %d is: %d", z, sum);
    return 0;
}
