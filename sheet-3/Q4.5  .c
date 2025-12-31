#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("enter num1 and num2 : \n");
    scanf("%d%d", &num1, &num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
    return 0;
}
