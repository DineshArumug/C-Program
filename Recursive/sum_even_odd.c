//Write a C program to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int sum_even_odd(int number);
int odd,even=0;
int main()
{
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	sum_even_odd(number);
	printf("Even = %d Odd = %d\n",even,odd);	
}
int sum_even_odd(int number)
{
	static int i = 0;
	if(i<=number){
		if(i%2==0){
			even = even+i;
			i++;
		}
		else{
			odd = odd+i;
			i++;
		}
		return sum_even_odd(number);
	}
	else {
		return 0;
	}
}
