#include<stdio.h>
void print_binary_number(unsigned int);
int main()
{
	unsigned int bit_position,checking1,checking2,value,i,j,temp;
	printf("Enter the any value \n"),scanf("%d",&value);
	print_binary_number(value);
	printf("Enter the bit position\n"),scanf("%d",&bit_position);
	checking1 = value>>bit_position+1;
	checking2 = value<<(31-bit_position+1);
	value = checking1 | checking2;
	print_binary_number(value);


}
void print_binary_number(unsigned int value)
{
	int i;
	for(i=31;i>=0;i--){
		printf("%d ",1&(value>>i));
	}
	printf("\n");
}
