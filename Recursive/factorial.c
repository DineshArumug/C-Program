//Write a C program to find factorial of any number using recursion.
#include<stdio.h>
int factorial_number(int );
int main()
{
	int factorial;
	printf("Enter the any number\n"),scanf("%d",&factorial); 
	int check = factorial_number(factorial);
	printf("Factorial of %d = %d \n",factorial,check);
}
int factorial_number(int value)
{
	static int i = 1;
	if(value > 1){
		i = i*value;
		return factorial_number(--value);
	}
	return i;
}
