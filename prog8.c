// DEMONSTRATE THE WORKING OF KEYWORD LONG
#include<stdio.h>
int main()
{
    int a;
    long b;
    long long c;
    double d;
    long double e;

    printf("size of int is:%lu bytes\n ",sizeof(a));
    printf("size of long is:%lu bytes\n ",sizeof(b));
    printf("size of long long is:%lu bytes\n ",sizeof(c));
    printf("size of double is:%lu bytes\n ",sizeof(d));
    printf("size of long double is:%lu bytes\n ",sizeof(e));
    return 0;
}