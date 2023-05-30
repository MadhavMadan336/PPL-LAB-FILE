#include <stdio.h>
int main() {
    int num1, num2;
    int result = 0;
    // Input the numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    // Check for special cases: zero or one
    if (num1 == 0 || num2 == 0) {
        printf("Result: 0\n");
        return 0;
    }
    // Perform repeated addition
    int i;
    for (i = 0; i < num2; i++) {
        result += num1;
    }
    // Output the result
    printf("Result: %d\n", result);
    return 0;
}
