#include <stdio.h>

int sumOfArray(int arr[], int size) {
    // Base case: if the size is 0, return 0
    if (size == 0)
        return 0;
    // Recursive case: add the last element with the sum of the rest of the elements
    else
        return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = sumOfArray(arr, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
