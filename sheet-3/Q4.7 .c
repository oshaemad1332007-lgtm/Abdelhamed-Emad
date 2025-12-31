#include <stdio.h>

int main()
{
    int num1, num2, num3, max;
    printf("enter num1 , num2 and num3 : \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    max = ((num1 >= num2) * num1 + (num2 >= num1) * num2);
    max = ((max >= num3) * max + (num3 >= max) * num3);

    printf(" the largest number = %d\n", max);

    return 0;
}
