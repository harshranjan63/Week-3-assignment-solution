//Q4. Write a program in C to find the factorial of a number using recursion.
#include<stdio.h>
int fact(int a,int f)
{
    if(a==1)
        return f;
    f=a*fact(a-1,f);
    return f;    
}
int main()
{
	int n,t,f=1;
	printf("please enter the numbers you wanted to find the factorial: ");
	scanf("%d",&n);
	t=fact(n,f);
	printf("Factoral of the number %d is: %d",n,t);
	return 0;
}
