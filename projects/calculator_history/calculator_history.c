#include <stdio.h>

float history[50];
char operation[50];
int count = 0;

// Addition
void add()
{
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    result = a + b;

    printf("Result = %.2f\n", result);

    history[count] = result;
    operation[count] = '+';
    count++;
}

// Subtraction
void subtract()
{
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    result = a - b;

    printf("Result = %.2f\n", result);

    history[count] = result;
    operation[count] = '-';
    count++;
}

// Multiplication
void multiply()
{
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    result = a * b;

    printf("Result = %.2f\n", result);

    history[count] = result;
    operation[count] = '*';
    count++;
}

// Division
void divide()
{
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(b == 0)
    {
        printf("Division by zero not possible!\n");
        return;
    }

    result = a / b;

    printf("Result = %.2f\n", result);

    history[count] = result;
    operation[count] = '/';
    count++;
}

// Show History
void showHistory()
{
    int i;

    printf("\n===== CALCULATOR HISTORY =====\n");

    if(count == 0)
    {
        printf("No history available!\n");
        return;
    }

    for(i = 0; i < count; i++)
    {
        printf("%d. Operation %c -> Result = %.2f\n",i + 1,operation[i],history[i]);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Show History\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                subtract();
                break;

            case 3:
                multiply();
                break;

            case 4:
                divide();
                break;

            case 5:
                showHistory();
                break;

            case 6:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
