#include <stdio.h>

int main()
{

    do
    {
        printf("Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. Exit\n");
        int cho;
        printf("Enter your choice: ");
        scanf("%d", &cho);
        float a, b;

        if (cho == 1)
        {
            printf("Enter two numbers to add : ");
            scanf("%f %f", &a, &b);
            printf("Result : %f\n", a + b);
        }
        else if (cho == 2)
        {
            printf("Enter two numbers to Subtract : ");
            scanf("%f %f", &a, &b);
            printf("Result : %f\n", a - b);
        }
        else if (cho == 3)
        {
            printf("Enter two numbers to Multiply : ");
            scanf("%f %f", &a, &b);
            printf("Result : %f\n", a * b);
        }
        else if (cho == 4)
        {
            printf("Enter two numbers to Divide : ");
            scanf("%f %f", &a, &b);
            printf("Result : %f\n", a / b);
        }

        else if (cho == 0)
        {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
    } while (1);

    return 0;
}
