#include <stdio.h>
#include "algo.h"

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));

    if (num2 != 0) {
        printf("Quotient: %.2f\n", divide(num1, num2));
    } else {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}

