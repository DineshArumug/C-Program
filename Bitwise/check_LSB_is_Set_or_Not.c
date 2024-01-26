//Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include<stdio.h>
int main(){
	int LSB_Number,Checking_value;
	printf("Enter the Any number for checking the LSB is set or not\n");
	scanf("%d",&LSB_Number);
	Checking_value = LSB_Number&1?printf("LSB is set bit\n"):printf("LSB is not set bit\n");
	if(Checking_value==1){
	printf("********Successfully*********\n");
	}else {
	printf("********Failed*********\n");
	}
	return 0;
}

