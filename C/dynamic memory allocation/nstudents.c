#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *ptr;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    ptr = (struct Student*)malloc(n * sizeof(struct Student));

    for(i=0; i<n; i++) {
        printf("\nEnter details of student %d\n", i+1);
        printf("Roll: "); scanf("%d", &(ptr+i)->roll);
        printf("Name: "); scanf("%s", (ptr+i)->name);
        printf("Marks: "); scanf("%f", &(ptr+i)->marks);
    }

    printf("\n--- Student Details ---\n");
    for(i=0; i<n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               (ptr+i)->roll, (ptr+i)->name, (ptr+i)->marks);
    }

    free(ptr);
    return 0;
}
