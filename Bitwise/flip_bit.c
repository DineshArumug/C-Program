#include<stdio.h>
void print_binary_number(int);
int count_flip_bit(int,int);
int main()
{
	int flip_bit1,flip_bit2,result;
	printf("Enter the Any two number for flipping two bits\n"),scanf("%d %d",&flip_bit1,&flip_bit2);
	printf("******************Flip_bit 1************************* \n");
	print_binary_number(flip_bit1);
	printf("******************Flip_bit 2************************* \n");
	print_binary_number(flip_bit2);
	printf("******************Result************************* \n");
	result = flip_bit1 ^ flip_bit2;
	print_binary_number(result);
	int count_flip = count_flip_bit(flip_bit1,flip_bit2);
	printf("Total No.of Count flipbit = %d \n",count_flip);
}
void print_binary_number(int value)
{
	int i;
	for(i=31;i>=0;i--)
	{
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
int count_flip_bit(int value1,int value2){
	int i,checking1,checking2,count = 0;
	for(i=0;i<=31;i++){
		checking1 = 1&(value1>>i);
		checking2 = 1&(value2>>i);
		if(checking1!=checking2)
			count++;
		else 
			continue;
	}
	return count;
}
