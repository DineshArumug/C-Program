#include<stdio.h>
void print_binary_number(int);
int main()
{
	int toggle_bit_position,value,checking_value;
	printf("Enter the any Value\n"),scanf("%d",&value);
	print_binary_number(value);
label:	printf("Enter the toggle position bit\n"),scanf("%d",&toggle_bit_position);
	if((toggle_bit_position >= 0) && (toggle_bit_position <= 31)){
		value =value ^ (1<<toggle_bit_position);
	printf("Toogle bit ");
	}
	else{
		printf("Bit position is invalid \n*****************Please you can try again****************\n");
		goto label;
	}
	print_binary_number(value);
}
void print_binary_number(int value)
{
	int i;
	printf("Printing the binary number\n");
	for(i=31;i>=0;i--){
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
