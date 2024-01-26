//Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int sum_natural_number(int number,int value);
int main(){

	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	int sum = sum_natural_number(number,0);
	printf("Sum of natural_number = %d \n",sum);
}
int sum_natural_number(int number,int value){
	static int i=0;
	if(i<=number){
		value = value+i;
		i++;
		return sum_natural_number(number,value);
	}
	return value;
}
