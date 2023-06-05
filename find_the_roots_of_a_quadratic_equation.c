#include <stdio.h>
#include <math.h>

void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double realPart, imaginaryPart;

    if (discriminant > 0) {
        // Real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        double root = -b / (2 * a);
        printf("Root 1: Root 2: %.2f\n", root);
    } else {
        // Complex conjugate roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    findRoots(a, b, c);

    return 0;
}
