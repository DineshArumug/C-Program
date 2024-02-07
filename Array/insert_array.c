#include "header.h"
common *insert_array(common *value)
{
	int position,arr_value;
	int i = 0;
	printf("Please enter the position for array\n");
	scanf("%d",&position);
	printf("Please enter the array elementv= for that particular position\n");
	scanf("%d",&arr_value);
	for(i=5-one;i>=position;i--)
	{
		value->arr_int[i+one] = value->arr_int[i];
	}
	value->arr_int[position] = arr_value;
	printf("Insert Array element = ");
	return value;
}
