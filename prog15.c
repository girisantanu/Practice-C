#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if (num>0)
    {
        printf("positive number");
    }
     else if (num ==0)
     {
        printf("neither positive nor negetive");
     }

     else
        {
            printf("negative number");
        }
     
    
    return 0;
}