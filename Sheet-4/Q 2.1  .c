// Even or Odd (using an if statement):
//  Write a C program that checks if a user-entered number is even or odd,
//   using an if statement.
#include <stdio.h>

int main()
{
    int x;
    printf("please input x\n");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("even\n");
    else
        printf("odd");

    return 0;
}
