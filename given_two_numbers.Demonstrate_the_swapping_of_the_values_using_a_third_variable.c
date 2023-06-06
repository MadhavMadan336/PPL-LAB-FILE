#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original values
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Swap the values using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped values
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
