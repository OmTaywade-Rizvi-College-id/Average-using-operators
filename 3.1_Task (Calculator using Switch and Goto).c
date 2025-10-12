#include <stdio.h>
//Om Satish Taywade
//FE comps
//251P027
//division C
int main() {
    double num1, num2, result;
    char op;
    
start:  // Label for goto or goto start

    // Give the Input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Operation was performed using switch condition
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    // Ask user if they want to continue
    char choice;
    printf("Do you want to perform another operation? (y/n): ");
    scanf(" %c", &choice);

    if(choice == 'y' || choice == 'Y') {
        goto start;  // Repeat the process
    }

    printf("Calculator exited.\n");
    return 0;
}
