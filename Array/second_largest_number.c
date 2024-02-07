#include"header.h"

common *second_largest_number(common *value)
{
	int i,big=value->arr_int[0],sec_big;
	printf("Enter the 5 array element\n");
	for(i=zero;i<5;i++)
		scanf("%d",&value->arr_int[i]);
	for(i=zero;i<5;i++)
	{
		if(value->arr_int[i]>big)
		{
			value->sum = big;
			big = value->arr_int[i];
		}
	}
	return value;
}
