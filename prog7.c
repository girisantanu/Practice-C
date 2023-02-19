//Find the Size of int, float, double and char
#include<stdio.h>
int main()
{
    int inttype;
    float floattype;
    double doubletype;
    char chartype;

    printf("size of int:%lu bytes\n",sizeof(inttype));
    printf("size of float :%lu bytes\n",sizeof(floattype));
    printf("size of double:%lu bytes\n",sizeof(doubletype));
    printf("size of char:%lu bytes\n",sizeof(chartype));
    return 0;
}