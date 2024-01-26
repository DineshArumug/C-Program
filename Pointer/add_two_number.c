#include<stdio.h>
int add_number(int*,int*,int*);
int main()
{
	int x,y,result;
	printf("Enter the any number for adding two number\n"),scanf("%d %d",&x,&y);
	add_number(&x,&y,&result);
	printf("Adding two number = %d \n",result);
}
int add_number(int* value1,int *value2,int *result){
	*result = *value1 + *value2;
}
