//Q3 Write a program in C to find GCD and LCM of two numbers using recursion.
#include<stdio.h>
int gcd(int a,int b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int lcm(int w , int r,int e)
{
    if(e%w==0 && e%r==0)
    {
        return e;
    }
    else
    {
        e++;
        return lcm(w,r,e);
    }
}
int main()
{
	int n,s,t,x,y,u;
	printf("please enter the numbers you wanted to find the gcd and lcm: ");
	scanf("%d",&n);
    scanf("%d",&s);
    if(n>s)
    {
        x=n;
        y=s;
    }
    else
    {
        x=s;
        y=n;
    }
	t=gcd(x,y);
    u=lcm(x,y,1);
	printf("GCD of the number %d and %d is: %d",n,s,t);
    printf("\nLCM of the number %d and %d is: %d",n,s,u);
	return 0;
}
