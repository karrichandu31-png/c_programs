#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (e.g. 10 + 5): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case '%':
            printf("Result = %d", (int)a % (int)b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
