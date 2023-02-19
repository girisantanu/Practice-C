//a character is an alphabet or not
#include<stdio.h>
int main()
{
    char c;
    char a,z,A,Z;
    printf("Enter the character:");
    scanf("%c",&c);

    if ('a'<=c && c<='z') 
    {
       printf("it's a alphabet "); 
    }

    else if ('A'<=c && c<='Z')
    {
       printf("it's a alphabet "); 
    }
    else
    {
        printf("it's not a alphabet");
    }
    
    return 0;
}