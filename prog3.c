// Add two integer
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter first integer: \n");
    scanf("%d", &num1);
    printf("Enter second integer:\n");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Enter the sum:%d+%d=%d\n", num1, num2, sum);
    return 0;
}