// Find the Maximum Number (using a conditional/ternary operator):
// Write a C program that finds
// the largest number among three user-entered numbers using a conditional (ternary) operator.
#include <stdio.h>

int main()
{
    int a, b, c, y;
    printf("please enter  your numbers  \n");
    scanf("%d%d%d", &a, &b, &c);

    y = ((a > b)   ? (a > c) ? a : c
         : (b > c) ? b
                   : c);

    printf("largest num is %d", y);

    return 0;
}
