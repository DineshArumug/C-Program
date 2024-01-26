//Write a C program to find reverse of any number using recursion.
#include<stdio.h>
#include<math.h>
int reverse_number(int number);
int main(){
	int number;
	printf("Enter the number\n");
	scanf("%d",&number);
	int reverse = reverse_number(number);
	printf("Reverse number = %d\n",reverse);
}
int reverse_number(int number){
	static int reverse = 0;
	if(number!=0){
		reverse = (reverse*10)+(number%10);
		number/=10;
		return reverse_number(number);
	}
	return reverse;
}
