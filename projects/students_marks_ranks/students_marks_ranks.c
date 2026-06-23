#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    int english, telugu, maths, physics;
    int total;
};

struct Student s[5] =
{
    {1, "Chandu",   100, 100, 100, 100, 400},
    {2, "Priya",    95,  98,  97,  96,  386},
    {3, "Mounika",  90,  92,  94,  91,  367},
    {4, "Snehitha", 88,  89,  90,  87,  354},
    {5, "King",     85,  86,  84,  83,  338}
};

int n = 5;

// Function to sort students by total marks
void sortStudents()
{
    int i, j;
    struct Student temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(s[j].total > s[i].total)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

// Function to display rank list
void displayRanks()
{
    int i;

    sortStudents();

    printf("\n===== RANK LIST =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRank %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("English : %d\n", s[i].english);
        printf("Telugu  : %d\n", s[i].telugu);
        printf("Maths   : %d\n", s[i].maths);
        printf("Physics : %d\n", s[i].physics);
        printf("Total   : %d\n", s[i].total);
    }
}

// Function to search student
void searchStudent()
{
    int roll, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            found = 1;

            printf("\n===== STUDENT DETAILS =====\n");
            printf("Roll No : %d\n", s[i].roll);
            printf("Name    : %s\n", s[i].name);
            printf("English : %d\n", s[i].english);
            printf("Telugu  : %d\n", s[i].telugu);
            printf("Maths   : %d\n", s[i].maths);
            printf("Physics : %d\n", s[i].physics);
            printf("Total   : %d\n", s[i].total);
        }
    }

    if(found == 0)
    {
        printf("Student Not Found!\n");
    }
}

// Main Function
int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Display Rank List\n");
        printf("2. Search Particular Student\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayRanks();
                break;

            case 2:
                searchStudent();
                break;

            case 3:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
