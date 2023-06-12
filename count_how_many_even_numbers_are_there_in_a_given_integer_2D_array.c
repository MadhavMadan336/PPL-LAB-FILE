 #include <stdio.h>

#define ROWS 3
#define COLS 3

int countEvenNumbers(int arr[ROWS][COLS]) {
    int count = 0;

    // Traverse the array and count even numbers
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (arr[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[ROWS][COLS];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int evenCount = countEvenNumbers(arr);

    printf("Number of even numbers in the array: %d\n", evenCount);

    return 0;
}
