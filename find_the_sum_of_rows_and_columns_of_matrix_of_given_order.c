#include <stdio.h>

#define MAX_SIZE 10

void sumOfRowsAndColumns(int matrix[MAX_SIZE][MAX_SIZE], int order) {
    int rowSum[MAX_SIZE] = {0};
    int columnSum[MAX_SIZE] = {0};

    // Calculate the sum of rows and columns
    for (int i = 0; i < order; ++i) {
        for (int j = 0; j < order; ++j) {
            rowSum[i] += matrix[i][j];
            columnSum[j] += matrix[i][j];
        }
    }

    // Display the sum of rows
    printf("Sum of rows:\n");
    for (int i = 0; i < order; ++i) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    // Display the sum of columns
    printf("Sum of columns:\n");
    for (int i = 0; i < order; ++i) {
        printf("Column %d: %d\n", i + 1, columnSum[i]);
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int order;

    printf("Enter the order of the matrix: ");
    scanf("%d", &order);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < order; ++i) {
        for (int j = 0; j < order; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    sumOfRowsAndColumns(matrix, order);

    return 0;
}
