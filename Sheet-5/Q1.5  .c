#include <stdio.h>

int main()
{
    int sum = 0;
    while (1)
    {
        int n;
        printf(" enter your number : ");
        scanf("%d", &n);
        if (n == 0)
            break;

        sum += n;
    }
    printf("sum : %d", sum);
    return 0;
}
