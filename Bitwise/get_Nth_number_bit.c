#include<stdio.h>
void print_binary_number(int value);
int main()
{
	int get_bit,checking_value,value;
	printf("Enter the any value\n");
	scanf("%d",&value);
	print_binary_number(value);
	printf("Enter the position of a bit which you want to get\n");
	scanf("%d",&get_bit);
	checking_value = 1&(value>>get_bit);
	if(checking_value != 0){
		printf("Get a bit value is 1\n");
	}else{
		printf("Get a bit value is 0\n");
	}
	
}
void print_binary_number(int value){
	int i;
	printf("Printing the Binary number\n");
	for(i=31;i>=0;i--){
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
