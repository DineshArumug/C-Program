//Write a C program to remove all occurrences of a character from string.
#include"header.h"
#define String_lenght(str) strlen(str)
typedef struct count_occurrence
{
	char str[100];
	char name;
	int count;
}CO;
CO* occurrence_count(CO *);
int main()
{
	CO *real = (CO *)malloc(sizeof(CO));
	printf("Enter the any string for count occurrence\n");
	scanf("%[^\n]",real->str);
	printf("Enter the any character for remove occurrennce\n");
	scanf(" %c",&real->name);
	CO *result = occurrence_count(real);
	printf("String name %s\n",result->str);
}
CO* occurrence_count(CO *value)
{
	int i,j;
	for(i=zero;value->str[i];i++)
	{
		if(value->str[i]==value->name)
		{
			for(j=i;value->str[j];j++)
			{
				value->str[j] = value->str[j+1];
			}
			i--;
		}	
	}
	return value;
}
