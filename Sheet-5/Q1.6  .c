#include <stdio.h>

int main()
{
    float cnt = 0, sum = 0;
    do
    {
        float n;
        printf("enter positive numbers (enter a negative number to stop):");
        scanf("%f", &n);
        if (n < 0)
            break;
        else
            cnt++;
        sum += n;
    } while (1);
    printf("Average: %f", sum / cnt);

    return 0;
}
