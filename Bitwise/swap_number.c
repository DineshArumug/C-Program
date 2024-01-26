#include<stdio.h>
int main(){
	int swap_number1,swap_number2,result;
	printf("Enter the any two number for swapping number\n"),scanf("%d %d",&swap_number1,&swap_number2);
	printf("Before printing swapping two number %d		%d\n",swap_number1,swap_number2);
	swap_number1 ^= swap_number2 ^= swap_number1 ^= swap_number2;
	printf("After printing swapping two number  %d		%d\n",swap_number1,swap_number2);
	
}
