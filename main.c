#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, result;
    int choice;
    while(choice != 7)
    {
        printf("====== Simple Calculator ======\n");
        printf("====== Select Operation ======\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (^)\n");
        printf("6. Square Root (sqrt)\n");
        printf("7. Exit\n");
        printf("Enter a choice (1 - 7): ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            result = a + b;
            printf("Addition = %.2lf\n", result);
            break;
        case 2:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            result = a - b;
            printf("Subtraction = %.2lf\n", result);
            break;
        case 3:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            result = a * b;
            printf("Multiplication = %.2lf\n", result);
            break;
        case 4:
            printf("Enter first number: ");
            scanf("%lf", &a);
            printf("Enter second number: ");
            scanf("%lf", &b);
            if(b == 0)
            {
                printf("Division cannot be performed");
            }
            else
            {
                result = a / b;
                printf("Division = %.2lf\n", result);
            }
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            printf("Enter it's power: ");
            scanf("%lf", &b);
            result = pow(a, b);
            printf("Power = %.2lf\n", result);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%lf", &a);
            result = sqrt(a);
            printf("Square Root = %.2lf\n", result);
            break;
        case 7:
            printf("Exiting.....\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}