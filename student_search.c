#include <stdio.h>

int main() {
    int a[100], n, key, i, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of students!");
        return 0;
    }

    printf("Enter roll numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Student Roll Numbers: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Student Found!\n");
            printf("Position: %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Student Not Found!\n");
    }

    return 0;
}
