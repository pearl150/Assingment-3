/# assingment3
//calculator 
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b, result;

    do {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithm (base e)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter two numbers to add: ");
            scanf("%lf %lf", &a, &b);
            result = a + b;
            printf("Result: %.2lf\n", result);
        } else if (choice == 2) {
            printf("Enter two numbers to subtract: ");
            scanf("%lf %lf", &a, &b);
            result = a - b;
            printf("Result: %.2lf\n", result);
        } else if (choice == 3) {
            printf("Enter two numbers to multiply: ");
            scanf("%lf %lf", &a, &b);
            result = a * b;
            printf("Result: %.2lf\n", result);
        } else if (choice == 4) {
            printf("Enter two numbers to divide: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0) {
                result = a / b;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
        } else if (choice == 5) {
            printf("Enter a number to find its logarithm (base e): ");
            scanf("%lf", &a);
            if (a > 0) {
                result = log(a);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Logarithm is not defined for zero or negative values.\n");
            }
        } else if (choice == 6) {
            printf("Enter a number to find its square root: ");
            scanf("%lf", &a);
            if (a >= 0) {
                result = sqrt(a);
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Square root is not defined for negative values.\n");
            }
        } else if (choice == 7) {
            printf("Exiting...\n");
        } else {
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
