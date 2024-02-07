//Write a C program to count total number of duplicate elements in an array.
#include"header.h"
common *duplicate_element(common *value)
{
	int i,j,k;
	for(i=zero;i<max;i++)
	{
		value->count = 0;
		for(j=zero;j<max;j++)
			if(value->arr_int[i] == value->arr_int[j])
				break;
		if(i == j)
		{
			for(k=zero;k<max;k++)
			{
				if(value->arr_int[k] == value->arr_int[i])
					value->count++;
			}
			if(value->count>1)
				printf("Duplicate Array Element %d -----> %d times\n",value->arr_int[i],value->count);
		}
	}
	return value;
}
