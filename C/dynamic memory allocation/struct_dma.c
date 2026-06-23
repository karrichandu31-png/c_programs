#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *ptr;
    ptr = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter roll, name, marks: ");
    scanf("%d %s %f", &ptr->roll, ptr->name, &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d, Name: %s, Marks: %.2f", ptr->roll, ptr->name, ptr->marks);

    free(ptr);
    return 0;
}
