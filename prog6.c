//  Compute Quotient and Remainder
#include <stdio.h>
int main()
{
    int Dividend, Divisor, Quotient, remainder;

    printf("Enter the value of Divident:");
    scanf("%d", &Dividend);

    printf("\nEnter the value of Divisor:");
    scanf("%d", &Divisor);

    Quotient = Dividend / Divisor;

    remainder = Dividend % Divisor;

    printf("Enter the Quotient: %d\n", Quotient);

    printf("Enter the remainder: %d\n", remainder);

    return 0;
}