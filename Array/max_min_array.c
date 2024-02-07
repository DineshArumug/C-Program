#include"header.h"

common *recrusive_array(common *value)
{
	static int i=zero,small=Small,big=zero;
	if(i<5)
	{
		if(value->arr_int[i]>big){
			value->sum = value->arr_int[i];
			big = value->arr_int[i];
		}
		if(value->arr_int[i]<small)
		{
			value->count = value->arr_int[i];
			small = value->arr_int[i];
		}
		i++;
		return recrusive_array(value);
	}
	else
		return value;
}
common *max_min_array(common *value)
{
	int i;
	printf("Enter the 5 array element\n");
	for(i=zero;i<5;i++)
		scanf("%d",&value->arr_int[i]);
	value = recrusive_array(value);
	return value;
}
