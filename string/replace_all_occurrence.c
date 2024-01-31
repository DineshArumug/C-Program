//Write a C program to replace all occurrences of a character with another in a string.
#include"header.h"
#define StringLenght(str) strlen(str)

typedef struct replace_all_occ
{
	char str[100];
	char replace;
	char name;
}RO;

RO *replace_all_occurrence(RO *value)
{
	int i;
	for(i=zero;value->str[i];i++)
	{
		if(value->str[i]==value->name)
		{
			value->str[i] = value->replace;
		}
	}
	return value;
}

int main()
{
	RO *real = (RO *)malloc(sizeof(RO));
	printf("Enter the any string line for replace all occurrences\n");
	scanf("%[^\n]",real->str);
	printf("Enter the any character\n");
	scanf(" %c",&real->name);
	printf("Enter the any character for replace all occurrece character\n");
	scanf(" %c",&real->replace);
	RO *result = (RO *)malloc(sizeof(RO));
	result = replace_all_occurrence(real);
	printf("String name = %s \n",result->str);
}
