//Write a C program to count total number of negative elements in an array.
#include"header.h"

common *number_negative_element(common *value)
{
	int i;
	printf("Enter the 5 number for count the number of negative element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&value->arr_int[i]);
	}
	value->count = 0;
	for(i=0;i<5;i++)
	{
		if(value->arr_int[i]<0)
			value->count++;
	}
	return value;
}
