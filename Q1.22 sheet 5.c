#include <stdio.h>

int main() {
    int choice;
    int a, b;

    while (1) {   
        printf("\nCalculator Menu:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:   
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a + b);
                break;

            case 2:  
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a - b);
                break;

            case 3:   
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", a * b);
                break;

            case 4:   
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                while (b == 0) {   
                    printf("Error: Division by zero is not allowed.\n");
                    printf("Enter the denominator again: ");
                    scanf("%d", &b);
                }

                printf("Result: %d\n", a / b);
                break;

            case 0 :
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:  
                printf("Invalid choice. Please enter a number between 0 and 4.\n");
                continue;   
        }

        if (choice == 0)
            break;   
    }

    return 0;
}
