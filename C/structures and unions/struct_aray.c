#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];  // Array of structures

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter ID, Name, Marks for student %d: ", i+1);
        scanf("%d %s %f", &students[i].id, students[i].name, &students[i].marks);
    }

    // Print student details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d | Name: %s | Marks: %.2f\n", 
               students[i].id, students[i].name, students[i].marks);
    }

    return 0;
}

