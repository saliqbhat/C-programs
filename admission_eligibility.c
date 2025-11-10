#include <stdio.h>

int main() {
    int n, marks[100], total = 0;
    float average;

    printf("Enter number of subjects: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] <= 40) {
            printf("Not Eligible  (Marks in subject %d is <= 40)\n", i + 1);
            return 0;
        }

        total += marks[i];
    }

    average = (float)total / n;

    if (average > 50)
        printf("Eligible for Admission \n");
    else
        printf("Not Eligible  (Aggregate < 50%%)\n");

    return 0;
}
