#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements of the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Find the maximum value in the array
    int max_value = array[0]; // Assume the first element as maximum initially

    for (int i = 1; i < size; i++) {
        if (array[i] > max_value) {
            max_value = array[i];
        }
    }

    // Outputting the result
    printf("The maximum value in the array is: %d\n", max_value);

    return 0;
}
