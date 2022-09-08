#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate (annual): ");
    scanf("%f", &interest_rate);
    printf("Enter amount of loan: ");
    scanf("%f", &monthly_payment);

    float monthly_interest_rate = (interest_rate / 100.0f) / 12.0;

    float paid_balance = loan - monthly_payment;
    loan = paid_balance + (loan * monthly_interest_rate);
    printf("Balance remaining after first payment: %.2f\n", loan);

    paid_balance = loan - monthly_payment;
    loan = paid_balance + (loan * monthly_interest_rate);
    printf("Balance remaining after second payment: %.2f\n", loan);

    paid_balance = loan - monthly_payment;
    loan = paid_balance + (loan * monthly_interest_rate);
    printf("Balance remaining after third payment: %.2f\n", loan);

}