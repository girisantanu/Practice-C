// check number is even and odd
#include <stdio.h>
int main()
{
    int num, even, odd;
    printf("Enter the num:\n");
    scanf("%d", &num);

    // printf("Enter the num2:\n");
    // scanf("%d",num2);

    // odd=num+0;
    // even=num+2;
    if (num % 2 == 0)
        printf("Enter your even number:%d", num);

    else

        printf("Enter your odd number:%d", num);

    return 0;
}