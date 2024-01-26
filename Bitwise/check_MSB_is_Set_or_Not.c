//Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include<stdio.h>
int main()
{
	int MSB_value,checking_value;
	printf("Enter the any value for checking the MSB is set or not\n");
	scanf("%d",&MSB_value);
	checking_value = MSB_value&(1<<31)?printf("MSB bit is set\n"):printf("MSB bit is not set\n");
	if(MSB_value&(1<<31)){
		printf("****************Successfully****************\n");
	}else{
		printf("****************FAILED****************\n");
	}
}
