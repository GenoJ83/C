
#include <stdio.h>
#include <string.h>
#define NUM_STUDENTS 10
#define NUM_ASSIGNMENTS 3

int main() {
    char student_names[NUM_STUDENTS][100];
    float assignment_scores[NUM_STUDENTS][NUM_ASSIGNMENTS];
    float averages[NUM_STUDENTS] = {0};

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter student name: ");
        fgets(student_names[i],100,stdin);
        for (int j = 0; j < NUM_ASSIGNMENTS; j++) {
            printf("Enter score for Assignment %d: ", j + 1);
            scanf("%f", &assignment_scores[i][j]);
            averages[i] += assignment_scores[i][j];
        }
        averages[i] /= NUM_ASSIGNMENTS;
    }


    printf("\nResults:\n");
    printf("Name\t\tAverage Score\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t\t%.2f\n", student_names[i], averages[i]);
    }

    return 0;
}
