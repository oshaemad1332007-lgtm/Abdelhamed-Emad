// Leap Year Checker (using an if statement):
//  Write the C code for a program that checks if a year entered by 
// the user is a leap year using an if statement.
// [Equations: Leap year if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0).]

#include <stdio.h>

int main()
{
    int x;
    printf("please input your year \n");
    scanf("%d", &x);

    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
        printf("leap year \n");
    else
        printf("not leap year");

    return 0;
}
