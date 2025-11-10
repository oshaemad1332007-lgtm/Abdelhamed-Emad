// 4)
// Leap Year Checker
//  (using a conditional/ternary operator):
//   Write the C code for a program that checks if a year entered by the user is a leap year, 
//   using a conditional/ternary operator.

#include <stdio.h>

int main()
{
    int x;
    printf("please input your year \n");
    scanf("%d", &x);

    ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0)) ? printf("leap year \n") : printf("not leap year");

    return 0;
}
