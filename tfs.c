#include <stdio.h>

int main() {
    char name1[50]; // Assuming the first name will be less than 50 characters
    char name2[50]; // Assuming the second name will be less than 50 characters

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    printf("Printing names three times:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name 1: %s\tName 2: %s\n", name1, name2);
    }

    return 0;
}
