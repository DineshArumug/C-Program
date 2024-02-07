#include"header.h"
common *delete_array(common *value)
{
	int i,position;
	printf("Enter the position for delete array element\n");
	scanf("%d",&position);
	for(i=position;i<5;i++)
	{
		value->arr_int[i] = value->arr_int[i+1];
	}
	value->arr_int[4] = zero;
	printf("Delect array element = ");
	return value;
}
