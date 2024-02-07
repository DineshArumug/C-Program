//Write a C program to find sum of all array elements. - using recursion.
#include"header.h"
common* sum(common *value)
{
	static int i = 0,j = 0;
	int k;
	if(j != 0)
	goto label;
	printf("Enter the 5 number of array element\n");
	for(k=0;k<5;k++)
	scanf("%d",&value->arr_int[k]);
	value->sum = 0;
label:	if(i<5)
	{
	//	printf("%d ",value->sum);
		value->sum = value->sum + value->arr_int[i];
		i++,j++;
		return sum(value);
	}
	else{
	return value;
	}
}
