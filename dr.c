#include <stdio.h>

#define MAX_SIZE 100

void initializeArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return (float) sum / size;
}

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    printf("Enter the size of the array (maximum %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 0;
    }

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Initialize the array\n");
        printf("2. Print the array\n");
        printf("3. Find the maximum element\n");
        printf("4. Find the minimum element\n");
        printf("5. Calculate the sum of all elements\n");
        printf("6. Calculate the average of all elements\n");
        printf("7. Search for an element\n");
        printf("8. Exit the program\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                initializeArray(arr, size);
                break;
            case 2:
                printArray(arr, size);
                break;
            case 3:
                printf("Maximum element: %d\n", findMax(arr, size));
                break;
            case 4:
                printf("Minimum element: %d\n", findMin(arr, size));
                break;
            case 5:
                printf("Sum of all elements: %d\n", calculateSum(arr, size));
                break;
            case 6:
                printf("Average of all elements: %.2f\n", calculateAverage(arr, size));
                break;
            case 7:
                int search;
                printf("Enter the element to search for: ");
                scanf("%d", &search);
                int index = searchElement(arr, size, search);
                if (index != -1) {
                    printf("Element %d found at index %d.\n", search, index);
                } else {
                    printf("Element %d not found in the array.\n", search);
                }
                break;
            case 8:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}
