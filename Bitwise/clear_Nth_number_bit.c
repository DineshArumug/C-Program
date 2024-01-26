#include<stdio.h>
void print_binary_number(int);
int main()
{
	int clear_bit_position,value,checking_value;
	printf("Enter the any Value\n"),scanf("%d",&value);
	print_binary_number(value);
label:	printf("Enter the Clear position bit\n"),scanf("%d",&clear_bit_position);
	checking_value = 1&(value>>clear_bit_position);	//value | (1<<set_bit_position);
	if(checking_value){
		value =value&~(1<<clear_bit_position);
		printf("Clear bit ");
	}else{
		printf("Already particluar bit was Cleared\n**************Please try some another bit position***************** \n");
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
