#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;   // 20% HRA
    da  = basic * 0.80;   // 80% DA

    gross = basic + hra + da;

    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
