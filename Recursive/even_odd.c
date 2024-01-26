//Write a C program to print all even or odd numbers in given range using recursion.
#include<stdio.h>
int even_odd(int number);
int main(){
	int number;
	printf("Enter the any number \n");
	scanf("%d",&number);
	even_odd(number);
}
int even_odd(int number)
{
	static int i = 1;
	if(i<=number)
	{
		if(i%2==0){
			printf("Even = %d\n",i);
			i++;
			return even_odd(number);
		}
		else{
			printf("Odd = %d\n",i);
			i++;
			return even_odd(number);
		}
	}
	else 
		return 0;
}
