//Q2 2.	Write a C program to print the factorial of a given number using functions.
#include<stdio.h>
int fact(int a);
int main()
{
    int n,f;
    printf("Please Enter the number for which you wanted to find the factorial: ");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is= %d",n,f);
    return 0;
}
int fact(int a)
{
    int c=1;
    while(a)
    {
        c=c*a;
        a--;
    }
    return c;
}