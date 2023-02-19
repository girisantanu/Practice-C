// swap two numbers
#include<stdio.h>
int main()
{
    double num1,num2,temp;
    printf("Enter the num1: ");
    scanf("%lf",&num1);

    printf("Enter the num2: ");
    scanf("%lf",&num2);

    
    
    temp=num1;
    num1=num2;
    num2=temp;

    printf("After swapping,num1=%.2lf\n",num1);
    printf("After swapping,num2=%.2lf\n",num2);

    return 0;
}