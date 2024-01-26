#include<stdio.h>
void print_binary_number(int);
int main()
{
	int set_bit_position,value,checking_value;
	printf("Enter the any Value\n"),scanf("%d",&value);
	print_binary_number(value);
label:	printf("Enter the Set position bit\n"),scanf("%d",&set_bit_position);
	checking_value = 1&(value>>set_bit_position);	//value | (1<<set_bit_position);
	if(!checking_value){
		value =value| (1<<set_bit_position);
		printf("Set bit ");
	}else{
		printf("Already bit is set\nPlease try some another bit position \n");
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
