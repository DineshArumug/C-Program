//Write a C program to count frequency of each element in an array.
#include"header.h"

common *count_freq(common *value)
{
	int i,j,k;
	for(i=zero;i<max;i++)
	{
		value->count = zero;
		for(j=zero;j<max;j++)
		{
			if(value->arr_int[i] == value->arr_int[j])
				break;
		}
		if(i==j)
		{
			for(k=zero;k<max;k++)
			{
				if(value->arr_int[k] == value->arr_int[i])
				value->count++;
			}
			printf("Array element = %d ----> %d times\n",value->arr_int[i],value->count);
		}
	}
	return value;
}
