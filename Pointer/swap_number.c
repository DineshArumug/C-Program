#include<stdio.h>
void swap_number(int *,int *);
int main()
{
	int value1, value2;	
	printf("Enter the two number for swap\n"),scanf("%d %d",&value1,&value2);
	printf("Before swap printing the value1 = %d 	value2 = %d \n",value1,value2);
	swap_number(&value1,&value2);
	printf("After swap printing the value1 = %d	value2 = %d \n",value1,value2);
}
void swap_number(int *value1,int *value2){
	int temp;
	temp = *value1,*value1 = *value2,*value2 = temp;
}
