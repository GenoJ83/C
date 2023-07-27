#include <stdio.h>

int main() {
    int duty_hours[7];
    int sum = 0;
    int count = 0;
    float Average = 0;
    int i;

    for (i = 0; i < 7; i++) {
        printf("Enter weekly duty hours: ");
        scanf("%d", &duty_hours[i]);

        if (duty_hours[i] < 24) {
            printf("Duty hours valid\n");
        } else {
            printf("Duty hours invalid\n");
        }

        sum += duty_hours[i];
        count++;
    }

    Average = (float)sum / 7;
    printf("The sum is %d\n", sum);
    printf("The average is %.2f\n", Average);

    return 0;
}
