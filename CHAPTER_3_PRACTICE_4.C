#include <stdio.h>
int main()
{
    float tax;
    float income;
    printf("GIVE YOUR INCOME\n");
    scanf("%f", &income);
    if (income >= 250000.0 && income <= 500000.0)
    {
        tax = 5.0 / 100.0 * (income - 250000.0);
    }
    else if (income >= 500000.0 && income <= 1000000.0)
    {
        printf("YOU HAVE TO PAY %f TAX", tax = (20.0 / 100.0) * (income - 500000.0) + 12500);
    }
    else if (income >= 1000000)
    {
        printf("YOU HAVE TO PAY %f TAX", tax = (30.0 / 100.0) * (income - 1000000.0) + 12500 + 100000);
    }
    else
    {
        printf("YOU DON'T HAVE TO GIVE ANY TAX");
    }
    return 0;
}