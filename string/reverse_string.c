//Write a C program to find reverse of a string.
#include"header.h"

typedef struct reverse{
	char str[100];
}sr;
sr *reverse_string(sr *value);
int main()
{
	sr *real = (sr*)malloc(sizeof(sr));
	printf("Enter the any string for reverse string\n"),scanf("%[^\n]",real->str);
	sr *result = (sr *)malloc(sizeof(sr));
	result = reverse_string(real);
	printf("REVERSE STRING = %s\n",result->str);
	free(result);
}
sr *reverse_string(sr *value)
{
	int i,j;
	char temp;
	for(j=zero;value->str[j];j++);
	for(i = zero,j=j-1;i<j;i++,j--)
	{
		temp = value->str[j];
		value->str[j] = value->str[i];
		value->str[i] = temp;
	}
	return value;
	free(value);
}
