#include <stdio.h>

int main(void)
{
    int dollar_amount, bills_20, bills_10, bills_5, bills_1, current_amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_amount);

    bills_20 = dollar_amount / 20;
    current_amount = dollar_amount % 20;

    bills_10 = current_amount / 10;
    current_amount = current_amount % 10;

    bills_5 = current_amount / 5;
    current_amount = current_amount % 5;

    bills_1 = current_amount / 1;


    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);

    return 0;
}