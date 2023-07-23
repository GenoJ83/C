#include <stdio.h>

int main() {
    int number, factorial;
    printf("Enter a number: ");
    scanf("%d", &number);

    factorial = 1;

    while (number > 0) {
        factorial *= number;
        number--;
    }

    printf("The factorial of the number is: %d\n", factorial);

    return 0;
}
