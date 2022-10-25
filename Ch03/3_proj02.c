/**
 * program formats product information entered by the user.
 * it pretty prints the output into columns & rows.
 */

#include <stdio.h>

int main(void)
{
    int item_no, month, day, year;
    float item_price;

    printf("Enter item number: ");
    scanf("%d", &item_no);

    printf("Enter unit price: ");
    scanf("%f", &item_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%d/%d/%d",
    item_no, item_price, month, day, year);

    return 0;
}