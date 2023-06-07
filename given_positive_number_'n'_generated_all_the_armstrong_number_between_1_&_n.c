#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber, remainder, digits = 0, result = 0;

    originalNumber = number;

    // Count the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        ++digits;
    }

    originalNumber = number;

    // Calculate the Armstrong number
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, digits);
        originalNumber /= 10;
    }

    // Check if the number is Armstrong
    if (result == number)
        return 1;
    else
        return 0;
}

void printArmstrongNumbers(int n) {
    printf("Armstrong numbers between 1 and %d:\n", n);

    for (int i = 1; i <= n; ++i) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printArmstrongNumbers(n);

    return 0;
}
