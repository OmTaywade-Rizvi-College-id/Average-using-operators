#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;

    // Input numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Add using pointers
    sum = *p1 + *p2;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
