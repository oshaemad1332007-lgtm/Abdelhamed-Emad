#include <stdio.h>

#define TAX_RATE 0.08

#define MAX_OPERATIONS 4

int main()
{
    float num1, num2, result;
    int choice;

    printf("calcoulator menu of operations\n");
    printf("1-Addition\n");
    printf("2-Subtraction\n");
    printf("3-Multiplication\n");
    printf("4-Division\n");

    printf("please choice yor operation from (1-4):\n");
    scanf("%d", &choice);

    printf(" please enter your num1: \n");
    scanf("%f", &num1);
    printf(" please enter your num2: \n");
    scanf("%f", &num2);

    result = (((choice == 1) * (num1 + num2)) + ((choice == 2) * (num1 - num2)) + ((choice == 3) * (num1 * num2)) + ((choice == 4) * (num1 / num2)));

    printf("yuor result without TAX_RATE =    %f\n", result);

    printf("yuor result with TAX_RATE =    %f\n", result * TAX_RATE);  

    return 0;
}
