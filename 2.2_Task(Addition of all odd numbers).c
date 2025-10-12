#include <stdio.h>
    // Om Satish Taywade
    // FYCE
    // UIN : 251P027
    // Division : C
int main() {
    int n, sum = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            sum += i;
        }
    }

    printf("Sum of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
