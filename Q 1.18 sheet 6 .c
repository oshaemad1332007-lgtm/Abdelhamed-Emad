#include <stdio.h>
int power1(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf(" %d ^ %d = %d ", a, b, power1(a, b));

    return 0;
}
