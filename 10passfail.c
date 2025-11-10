#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks: \n");
    scanf("%d", &marks);

    if (marks >= 50) {
        if (marks >= 60)
            printf("First Division");
        else
            printf("Second Division");
    } else
        printf("Fail");

    return 0;
}
