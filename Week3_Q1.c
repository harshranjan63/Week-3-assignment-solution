//Q1 1.	Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int a)
{
	int b;
	b= a*a;
	return b;
}
int main()
{
	int n,s;
	printf("please enter the number you wanted to find the square: ");
	scanf("%d",&n);
	s=square(n);
	printf("Square of the number %d is: %d",n,s);
	return 0;
}
