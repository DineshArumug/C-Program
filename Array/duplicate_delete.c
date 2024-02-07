//Write a C program to delete all duplicate elements from an array.

#include"header.h"

common *duplicate_delete(common *value)
{
	int i,j,k;
	for(i=zero;i<max;i++)
	{
		value->count = 0;
		for(j=zero;j<max;j++)
		{
			if(value->arr_int[i] == value->arr_int[j])
				break;
		}
		if(i == j)
		{
			for(k=zero;k<max;k++)
			{
				if(value->arr_int[i] == value->arr_int[k])
					value->count++;
			}
			if(value->count>1)
			{
				value->sum = value->arr_int[i];
				for(j=zero;j<max;j++)
				{
					if(value->sum == value->arr_int[j]){
						value->arr_int[j] = Small;
					}
				}
			}
		}
	}
	printf("Delete the duplicate = ");
	for(i=zero;i<max;i++)
	{
		if(value->arr_int[i] == Small)
		{
			for(j=i;j<max;j++)
				value->arr_int[j] = value->arr_int[j+1];
			value->arr_int[max-1] = zero;
			i-=1;
		}
	}
	return value;
}
