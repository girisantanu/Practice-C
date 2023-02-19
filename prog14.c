// // check leapyear year.
#include<stdio.h>
int main(){
    int year;

    printf("Enter the year: ");
    scanf("%d",&year);

    if (year % 400== 0)
    {
        printf("\nThis year can be leapyear: %d " ,year);
    }
    else if (year % 100 ==0)
    {
        printf("This year can't be leapyear: %d",year);

    }
    else if(year % 4 ==0)
    {
        printf("This year can be leapyear: %d",year);

    }

    else{
        printf("This year can't be leapyear: %d",year);
    }
    
    

    return 0;
}