//Write a C program to print all natural numbers between 1 to n using recursion.

#include<stdio.h>
int natural_fun(int);
int main()
{
	int natural_number;
	printf("Enter the any number\n");
	scanf("%d",&natural_number);
	natural_fun(natural_number);
}
int natural_fun(int value)
{
	static int i = 1;
	if(value>=i){
		printf("%d ",i);
		i++;
		return natural_fun(value);
		}
	else 
		return 0;
}
