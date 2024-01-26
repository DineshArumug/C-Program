#include<stdio.h>
int main()
{
	int count = 0,value,i;
	printf("Enter the any value\n"),scanf("%d",&value);
	for(i=31;i>=0;i--){
		if(!(1&(value>>i)))
			count++;
	}
	printf("Total Number zeros = %d\n",count);
}
