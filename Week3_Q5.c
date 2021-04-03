//Write a program in C to check whether a given number is palindrome or not using recursion.
#include<stdio.h>
int pall(int a,int b)
{
    if(b==a)
    {
        return 1;
    }
    else
        if(a=0)
            return 0;
        else
            b=b+pall(a/(++b),a%10);
}
int main()
{
	int n,t;
	printf("please enter the numbers you wanted to check: ");
	scanf("%d",&n);
	t=pall(n,0);
    if(t==1)
	    printf("Palindrome number");
    else if(t==0)
        printf("Not Palindrome number");
	return 0;
}


