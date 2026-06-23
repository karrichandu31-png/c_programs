#include <stdio.h>
#include <string.h>

struct bankaccount
{
    char name[50];
    int balance;
} bank;

// Function declarations
void createaccount();
void deposit();
void withdrawal();
void checkbalance();

int main()
{
    int choice;

    printf("welcome to bank\n");

    while (1)
    {
        printf("\n1.create account\n");
        printf("2.deposit\n");
        printf("3.withdrawal\n");
        printf("4.check balance\n");
        printf("5.exit\n");

        printf("enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                createaccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdrawal();
                break;

            case 4:
                checkbalance();
                break;

            case 5:
                printf("thank you for using bank\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}

// Create Account
void createaccount()
{
    printf("enter your name: ");
    scanf("%s", bank.name);

    printf("enter minimum amount 500: ");
    scanf("%d", &bank.balance);

    if (bank.balance < 500)
    {
        printf("minimum balance should be 500\n");
        bank.balance = 0;
    }
    else
    {
        printf("account created successfully\n");
    }
}

// Deposit
void deposit()
{
    int amount;

    printf("enter deposit amount: ");
    scanf("%d", &amount);

    bank.balance = bank.balance + amount;

    printf("amount successfully deposited\n");
}

// Withdrawal
void withdrawal()
{
    int amount;

    printf("enter amount to withdrawal: ");
    scanf("%d", &amount);

    if (amount > bank.balance)
    {
        printf("insufficient balance\n");
    }
    else
    {
        bank.balance = bank.balance - amount;
        printf("amount withdrawal successful\n");
    }
}

// Check Balance
void checkbalance()
{
    printf("your balance is %d\n", bank.balance);
}
