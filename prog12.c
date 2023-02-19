// find largest number among 3  numbers
#include<stdio.h>
int main()
{
    double n1,n2,n3;
    printf("Enter the three number is :");
    scanf("%.2lf %.2lf %.2lf",&n1,&n2,&n3);
    if (n1>=n2)
        if (n1>=n3)
        {
            printf ("%.2lf is the largest number",n1);
            
        }
        else
        {
            printf("%.2lf id the largest number",n3);
            
        }

    else
        if (n2>=n3)
        {
            
            printf("%.2lf is the largest number",n2);
            
        }

        else
        {
            printf("%.2lf is the largest number",n3);
            
            
        }
        
    
    return 0;

}