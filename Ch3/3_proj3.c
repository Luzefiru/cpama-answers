/**
 * program that parses International Standard Book Number (ISBN) codes: XXX-X-XXX-XXXXX-X
 * it prints each content of the number.
 */

#include <stdio.h>

int main(void)
{
    int gs1_prefix, group_identifier, publisher_code, item_no, check_digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",
    &gs1_prefix, &group_identifier, &publisher_code, &item_no, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check_digit);

    return 0;
}
