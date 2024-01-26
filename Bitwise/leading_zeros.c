#include<stdio.h>
void print_binary_value(int);
void find_trailing_zero(int);
int main()
{
	int value,highest_set_bit,i,count = 0;
	printf("Enter the any value\n"),scanf("%d",&value);
	print_binary_value(value);
	for(i=31;i>=0;i--){
		if(1&(value>>i)){
			count = i;
			break;
		}
	}
	printf("\n");
	if(count>0){
	count = 1<<count;}
	print_binary_value(count);
	find_trailing_zero(count);
}
void print_binary_value(int value)
{
	int i;
	for(i=31;i>=0;i--){
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
void find_trailing_zero(int value)
{
	int i,count = 0;
	for(i = 31;i>=0;i--){
		if(value&(1<<i))
			break;
		else
			count ++;
	}
	printf("Total trailing zero is %d\n",count);
}
