//Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int sum_of_digit(int number);
int main()
{
	int number;
	printf("Enter the any number\n"),scanf("%d",&number);
	int sum = sum_of_digit(number);
	printf("Sum of digit = %d\n",sum);
}
int sum_of_digit(int number)
{
	static int sum = 0;
	if(number!=0){
		sum = sum + number%10;
		return sum_of_digit(number/10);
	}
	return sum;
}
