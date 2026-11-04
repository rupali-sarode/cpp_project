#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

struct Student s[100];
int n = 0;

void create() {
    int count;
    printf("How many records to add? ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter roll, name, marks: ");
        scanf("%d %s %f", &s[n].roll, s[n].name, &s[n].marks);
        n++;
    }
}

void display() {
    if (n == 0) {
        printf("No records.\n");
        return;
    }
    printf("\nRoll\tName\tMarks\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
}

void modify() {
    int r, found = 0;
    printf("Enter roll number to modify: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            printf("Enter new name and marks: ");
            scanf("%s %f", s[i].name, &s[i].marks);
            printf("Record modified.\n");
            found = 1;
        }
    }
    if (!found)
        printf("Record not found.\n");
}

void search() {
    int r, found = 0;
    printf("Enter roll number to search: ");
    scanf("%d", &r);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            printf("Found: %d %s %.2f\n", s[i].roll, s[i].name, s[i].marks);
            found = 1;
        }
    }
    if (!found)
        printf("Record not found.\n");
}

void sort() {
    struct Student temp;

    /* bubble sort by roll number */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].roll > s[j + 1].roll) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Records sorted by roll number.\n");
}

int main() {
    int ch;

    do {
        printf("\n1.Create 2.Display 3.Modify 4.Search 5.Sort 0.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: create();  break;
            case 2: display(); break;
            case 3: modify();  break;
            case 4: search();  break;
            case 5: sort();    break;
            case 0: printf("Bye!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (ch != 0);

    return 0;
}
