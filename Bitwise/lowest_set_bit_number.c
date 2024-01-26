#include<stdio.h>
void print_binary_value(int);
int main()
{
	int value,lowest_set_bit,i,count = 0;
	printf("Enter the any value\n"),scanf("%d",&value);
	print_binary_value(value);
	for(i=31;i>=0;i--){
		if(1&(value>>i)){
			count = i;
		}
	}
	printf("\n");
	count = 1<<count;
	print_binary_value(count);
}
void print_binary_value(int value)
{
	int i;
	for(i=31;i>=0;i--){
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
